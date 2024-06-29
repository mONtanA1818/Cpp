#include <iostream>
using namespace std;


// 拷贝构造函数调用的时机
class Person
{
private:
public:
    int m_Age;
    Person();
    Person(int age);
    Person(const Person &p1);
    ~Person();
};

Person::Person()
{
    cout<<"默认构造函数的调用"<<endl;
}

Person::Person(int age){
    m_Age=age;
    cout<<"有参构造函数的调用"<<endl;
}

Person::Person(const Person &p1){
    cout<<"拷贝构造函数的调用"<<endl;
    m_Age=p1.m_Age;
}


Person::~Person()
{
    cout<<"析构函数的调用"<<endl;

}


// 1, 使用一个创建完毕的对象来初始化另外一个对象
void test01(){
    Person p1(20);
    Person p2(p1);
    cout<<"p2的年龄为"<<p2.m_Age<<endl;
}

// 2, 值传递的方式给函数参数传值
void doWork(Person p1)
{

}



void test02(){
    Person p1;    
    doWork(p1); // 相当于拷贝出了一个临时变量存放在栈区, 生存时间仅限于doWork的作用域上

}



// 3, 值方式返回局部对象 
Person doWork2(){
    Person p1;
    cout<<(int*)&p1<<endl;
    return (p1);     // 此时, 在函数中构造出来的存放在栈区中的p1已经消亡, 返回的是一个由拷贝构造函数重新创建出来的对象
}

void test03(){
    Person p2=doWork2();
    cout<<(int *)&p2<<endl;
}
int main(){
    // test01();
    // test02();
    test03();
    return 0;
}