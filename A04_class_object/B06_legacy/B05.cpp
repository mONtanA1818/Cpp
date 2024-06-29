#include <iostream>
using namespace std;

// 继承中同名成员处理
class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    void func()
    {
        cout << "Base -func的函数调用" << endl;
    }
    void func(int a)
    {
        cout << "Base -func的函数调用" << endl;
    }
    int m_A;
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    int m_A;

    void func()
    {
        cout << "Son -func的函数调用" << endl;
    }
};
// 同名属性的处理方式
void test01()
{
    Son s1;
    cout << "Son 下m_A= " << s1.m_A << endl;
    // 如果通过子对象 访问到父类中同名成员, 需要加作用域
    cout << "Base 下m_A= " << s1.Base::m_A << endl;
}

void test02()
{
    Son s1;
    s1.func();
    s1.Base::func();
}

void test03(){
    Son s1;
    // 如果子类中出现和父类同名的成员函数,子类的同名成员会隐藏吊父类中的所有同名成员函数
    // 如果想访问到父类中被隐藏的同名函数, 需要加作用域
    // s1.func(10);  // 此处无法发生重载
}

int main()
{
    // test01();
    test02();
    return 0;
}
