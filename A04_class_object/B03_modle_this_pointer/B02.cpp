#include<iostream>
using namespace std;


class Person
{
    public:
    Person(int age)
    {

        // this 指针指向的是 被调用的成员函数 所属的对象
        this->age = age;
    }
    int age;

    Person& AddPerson(Person &p)
    {
        this->age += p.age;
        // this 指向p2的指针, 而this返回的是p2的这个对象本体
        return *this;
    }
};


// 1, 解决名称冲突
void test01()
{
    Person p(10);
    cout<<"p的年龄为："<<p.age<<endl;
};


// 2返回对象本身用*this

void test02(){
    Person p1(10);
    Person p2(20);
    // 链式编程思想
    p2.AddPerson(p1).AddPerson(p1).AddPerson(p1);
    cout<<"p2的年龄为："<<p2.age<<endl;
}

int main()
{
    test02();
    return 0;
}