#include <iostream>
using namespace std;


// 静态成员函数
// 1, 所有对象共享同一个函数
// 2, 静态成员函数只能访问静态成员变量

class Person
{
    public:
    static void func(){
        cout<<"m_A="<<m_A<<endl;
        m_A=100;
        // m_B=200;
        cout<<"static void func调用"<<endl;
    }
    static int m_A;
    int m_B;
};

int Person::m_A=10;


void test01(){
    // 通过类名访问
    Person::func();
    // 通过对象访问
    Person p;
    p.func();
};


int main(){
    test01();
    return 0;
}