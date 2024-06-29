#include<iostream>
using namespace std;

class Person{
    public:
    void func1(){
        cout<<"call func1"<<endl;
    }
    void func2(){

        // 报错的原因是因为传入的指针是NULL
        if (this==NULL)
        {
            return;
        }
        
        cout<<"call func2"<<endl;
    }
    int m_Age;
};


void test01(){
    Person p2;
    Person *p=&p2;
    // *p = p2;
    p->func1();
    p->func2();
}


int main(){
    test01();
    return 0;
}