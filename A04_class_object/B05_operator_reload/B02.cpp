#include <iostream>
using namespace std;

class Person{

    // 重载左移运算符配合友元可以实现自定义输出自定义数据类型
    friend ostream& operator<<(ostream &out,Person &p1);
    public:
        Person(int a,int b){
            m_A=a;
            m_B=b;
        };
    private:
        int m_A;
        int m_B;
};

// 左移运算符只能用全局函数进行重载, 这样cout就在左侧


// ostream 对象只能有一个,所以只能用&引用
ostream& operator<<(ostream &out,Person &p1){
    out<<"m_A="<<p1.m_A<<"\tm_B="<<p1.m_B<<endl;
    return out;
}

void test01(){
    Person p(7,6);


    cout<<p<<"hello world"<<endl;  //链式编程

}


int main(){
    test01();
    return 0;
}