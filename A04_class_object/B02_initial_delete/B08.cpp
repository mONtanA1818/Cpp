#include <iostream>
using namespace std;

// 静态成员变量
// 1, 所有对象共享同一份数据
// 2, 在编译阶段分配内存
// 3, 类内声明,类外初始化




class Person
{
    public:
    static int m_A;
    private:;
};

int Person::m_A=10;


void test01(){
    // 通过类名访问
    cout<<"m_A="<<Person::m_A<<endl;
    // 通过对象访问
    Person p;
    cout<<"m_A="<<p.m_A<<endl;
}

void test02(){
    Person p1;
    p1.m_A=100;
    Person p2;
    cout<<"p2.m_A="<<p2.m_A<<endl;
}

int main(){
    // test01();
    test02();
    return 0;
}