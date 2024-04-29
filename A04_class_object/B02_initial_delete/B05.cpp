#include <iostream>
using namespace std;

// 深拷贝和浅拷贝

class Person
{
private:
    /* data */
public:
    Person(/* args */);
    Person(int age, int height);
    Person(const Person &p);
    ~Person();
    int m_Age;
    int *m_Hight;
};

Person::Person(/* args */)
{
}

Person::Person(int age, int height)
{
    m_Hight = new int(height);
    m_Age = age;
    cout << "Person的有参拷贝函数调用" << endl;
}

// 重新编写拷贝构造函数解决浅拷贝带来的问题
Person::Person(const Person &p)
{
    cout << "Person拷贝函数的调用" << endl;
    m_Age = p.m_Age;
    m_Hight = p.m_Hight; // 原先编译器浅拷贝中生成的代码

    // 深拷贝操作
    m_Hight = new int(*p.m_Hight);
}
Person::~Person()
{
    if (m_Hight != NULL)
    {
        delete m_Hight;
        m_Hight = NULL;
    }

    cout << "Person的析构函数调用" << endl;
}

void test01()
{
    Person p1(16, 157);
    cout << "p1的年龄为" << p1.m_Age << "身高:" << *p1.m_Hight << endl;
    Person p2(p1);
    cout << "p2的年龄为" << p2.m_Age << "身高:" << *p2.m_Hight << endl;
}

int main()
{
    test01();
    return 0;
}