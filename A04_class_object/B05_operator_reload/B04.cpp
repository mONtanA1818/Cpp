#include <iostream>
using namespace std;

// 赋值运算符的重载
class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);
    };
    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }
    // 本质上是赋值运算符是做了一次深拷贝, 防止析构函数在释放堆区内存是, 造成重复释放;
    Person &operator=(Person &p)
    {
        // 先释放原来堆区占用的内存
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        };
        // 深拷贝
        m_Age = new int(*p.m_Age);
        // 返回自身
        return *this;
    }
    int *m_Age;
};

void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);
    // 赋值运算符从右边往左边运算
    p3=p2=p1;
    cout <<"P1的年龄为"<< *p1.m_Age << endl;
    cout<<"P2的年龄为"<<*p2.m_Age<<endl;
    cout<<"P3的年龄为"<<*p3.m_Age<<endl;
}

int main()
{
    test01();
    return 0;
}