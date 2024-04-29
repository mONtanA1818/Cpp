#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1, 创建一个类,C++编译器会给每个类都添加至少3个函数
// 默认构造(空实现)
// 默认析构函数(空实现)
// 拷贝 构造函数(值传递)


//  2, 如果我们写了有参构造函数, 编译器就不再提供默认构造,依然提高拷贝构造
// 如果我们写了拷贝构造函数, 则编译器不会再提供其他构造函数

class Person
{
private:
    /* data */
public:
    // Person(/* args */);
    ~Person();

    Person(int age);
    // Person(const Person &p);
    int m_Age;
};

// Person::Person(/* args */)
// {
//     cout << "Person默认构造函数调用" << endl;
// }

Person::Person(int age)
{
    m_Age = age;
}
// Person::Person(const Person &p){
//     m_Age=p.m_Age;
//     cout << "Person拷贝构造函数调用" << endl;

// }
Person::~Person()
{
    cout << "Person析构函数调用" << endl;
}

// void test01(){
//     Person p1;
//     p1.m_Age=18;
//     Person p2(p1);
//     cout<<"p2的年龄为"<<p2.m_Age<<endl;
// }

void test02(){
    // Person p;
    Person p(28);
    Person p2(p);
    cout<<"p2的年龄为"<<p2.m_Age<<endl;
}

int main(){
    test02();
    return 0;
}