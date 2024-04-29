#include <iostream>
using namespace std;

class Phone{
    public:
    string m_Name;
    Phone(string phone){
        m_Name=phone;
        cout<<"Phone的有参构造函数调用"<<endl;
    }
    ~Phone(){
        cout<<"Phone的析构函数调用"<<endl;
    }
};


class Person
{
    public:
    string m_Name;
    Phone m_Phone;
    Person(string name, string phone):m_Name(name),m_Phone(phone){
        cout<<"Person的有参构造函数调用"<<endl;
    }
    ~Person(){
        cout<<"Person的析构函数调用"<<endl;
    }
};

void test01(){
    Person p("张三","123456");
    cout<<"姓名:"<<p.m_Name<<" 电话:"<<p.m_Phone.m_Name<<endl;
}

int main(){
    test01();
    return 0;
}