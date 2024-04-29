#include <iostream>
using namespace std;

class Person
{
private:
    string m_Name;
    int m_Age;

public:
    Person(string name, int age) : m_Name(name), m_Age(age){};
    bool operator==(Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    bool operator!=(Person &p)
    {
        if (this->m_Age != p.m_Age || this->m_Name != p.m_Name)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};


void test01(){
    Person p1("Tom",18);
    Person p2("Tom",14);
    if (p1==p2)
    {
        cout<<"p1和p2是相等的"<<endl;;
    }else
    {
        cout<<"p1和p2不相等"<<endl;
    }
    if (p1!=p2)
    {
        cout<<"p1和p2是不相等的"<<endl;;
    }else
    {
        cout<<"p1和p2相等"<<endl;
    }
    
}

int main(){
    test01();
    return 0;
}