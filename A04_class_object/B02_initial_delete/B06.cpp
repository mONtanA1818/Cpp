#include <iostream>
using namespace std;

// 初始化列表
class Person
{
public:
    int m_A;
    int m_B;
    int m_C;
    // 传统初始化操作
    // Person(int a, int b, int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    // 初始化列表初始化

    Person(int a, int b ,int c):m_A(a),m_B(b),m_C(c)
    {
    }
};

void test01()
{
    Person p1(1, 2, 3);
    cout << "p1.m_A===" << p1.m_A << endl;
    cout << "p1.m_B===" << p1.m_B << endl;
    cout << "p1.m_C===" << p1.m_C << endl;
}

int main()
{
    test01();
    return 0;
}