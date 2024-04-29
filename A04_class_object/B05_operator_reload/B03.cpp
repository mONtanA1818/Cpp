#include <iostream>
using namespace std;

// 重载递增运算符


// 前置递增返回引用, 后置递增返回一个值


// 自定义类型

class MyInteger{
    friend ostream& operator<<(ostream &cout,const MyInteger &a);
    // friend ostream& operator<<(ostream &cout,MyInteger a);
    public:
        MyInteger(){
            m_Num=0;
        };
        MyInteger(int num):m_Num(num){};
        // 重载前置++
        // 返回引用是因为要一直对一个数据进行操作
        MyInteger& operator++(){
            m_Num++;
            return *this;
        }

        // 重载后置++
        MyInteger operator++(int){   // int 代表占位参数, 可以用于区分前置和后置传递
            
            MyInteger temp=*this;
            m_Num++;
            return temp;
        }
        MyInteger& operator--(){
            m_Num--;
            return *this;
        }
        MyInteger operator--(int){
            MyInteger temp = *this;
            m_Num--;
            return temp;
        }
    private:
        int m_Num;
};

// 添加const之后, 函数可以接受常量对象和非常量对象作为参数

// a++这种后置++重载之后, 返回的是一个变量值,加const便可以输出它
ostream& operator<<(ostream &cout,const MyInteger &a){
    cout<<"m_Num="<<a.m_Num;
    return cout;
}

// ostream& operator<<(ostream &cout,MyInteger a){
//     cout<<"m_Num="<<a.m_Num;
//     return cout;
// }



void test01(){
    MyInteger a1;
    cout<<++a1<<endl;
    cout<<a1<<endl;

}

void test02(){
    MyInteger a1;

    // 当调用 cout << a1++ << endl; 时，
    // a1++ 返回的是一个临时的变量值对象，
    // 临时变量的对象通常不能直接引用，是因为临时变量是匿名的
    // 没有名称，无法在代码中明确地引用。
    // 然后 operator<< 函数接受这个对象的常量引用参数。
    // 为了接受临时对象，C++ 将创建一个临时的常量副本，并将其传递给 operator<< 函数。
    cout<<a1++<<endl;
    cout<<a1<<endl;
}

void test03(){
    MyInteger a1(4);
    cout<<a1--<<endl;
    cout<<--a1<<endl;
}

int main(){
    // test01();
    // test02();
    test03();
    return 0;
}