#include <iostream>
using namespace std;

// 继承中的同名静态成员处理方式

class Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Base - static void func()"<<endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son - static void func()"<<endl;
    }
};

int Son::m_A = 200;

// 同名静态成员属性

void test01()
{

    // 1, 通过对象的访问
    Son s;
    cout << "通过对象访问:   " << endl;
    cout << "Son 下的 m_A= " << s.m_A << endl;
    cout << "Base 下的 m_A= " << s.Base::m_A << endl;

    // 2, 通过类名访问

    cout << "通过类名访问" << endl;
    cout << "Son中的m_A=" << Son::m_A << endl;

    // 第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
    cout << "通过Son访问Base中的m_A=" << Son::Base::m_A << endl;
}

// 同名静态函数属性
void test02()
{
    // 1, 通过对象的访问
    Son s;
    cout << "通过对象访问:   " << endl;
    s.func();
    s.Base::func();

    // 2, 通过类名访问

    cout << "通过类名访问" << endl;
    Son::func();
    Son::Base::func();
};
int main()
{
    // test01();
    test02();
    return 0;
}