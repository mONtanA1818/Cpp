#include <iostream>
using namespace std;

// 常函数
class Person
{
public:

// this 只针对本诗 是指针常量 指针的指向是不可以修改的
    // const Person * const this;
    // 在成员函数后面加ocnst, 修饰的是this指向, 让指针指向的值也不可以修改
    void showPerson() const
    {
        this->m_B = 100;
        // m_A = 100;
        // this = NULL; // this指针不可以修改指向
    }

    int m_A=0;
    mutable int m_B=0; // 特殊变量, 即使在常函数中, 也可以修改这个值
    void func()
    {
        m_A = 100;
    }
    
};

void test01(){
    Person p;
    p.showPerson();
};

// 常对象
void test02()
{
    const Person p;
    // p.m_A = 100; // 常对象不可以修改成员变量的值
    p.m_B = 100; // 但是可以修改mutable修饰的变量

    // 常对象只能调用常函数
    p.showPerson();
    // p.func();   // 常对象不可以调用普通成员函数f
}
int main()
{
    test01();
    return 0;
}