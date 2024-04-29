#include <iostream>
using namespace std;

// 运算符重载

class Person{
    public:
        int m_A;
        int m_B;

    // 使用成员函数进行运算符重载

    // Person operator+(Person &p1){
    //     Person temp;
    //     temp.m_A=this->m_A+p1.m_A;
    //     temp.m_B=this->m_B+p1.m_B;
    //     return temp;
    // };
};

// 使用全局函数进行运算符重载

Person operator+(Person &p1, Person &p2){
    Person temp;
    temp.m_A = p1.m_A+p2.m_A;
    temp.m_B=p1.m_B+p2.m_B;
    return temp;
}

// 运算符重载也可以发生函数重载

Person operator+(Person &p1, int num){
    Person temp;
    temp.m_A = p1.m_A+num;
    temp.m_B=p1.m_B+num;
    return temp;
}


void test01(){
    Person p1;
    p1.m_A=10;
    p1.m_B=11;
    Person p2;
    p2.m_A=16;
    p2.m_B=19;
    
    // 成员函数使用运算重载的本质:
    // Person p3 = p1.operator+(p2);

    Person p3=p1+p2;

    cout<<"p3.m_A="<<p3.m_A<<endl;
    cout<<"p3.m_B="<<p3.m_B<<endl;

}

void test02(){
    Person p1;
    p1.m_A=66;
    p1.m_B=12;
    Person p2;
    p2.m_A=16;
    p2.m_B=19;

    // 全局函数使用运算符重载的本质:
    // Person p4 = operator+(p1,p2);
    Person p4 = p1+p2;
    // 远算符函数发生函数重载
    p4 = p1 +10;
    cout<<"p4.m_A="<<p4.m_A<<endl;
    cout<<"p4.m_B="<<p4.m_B<<endl;
    // Person p4 = p1+p2;
}

int main(){
    // test01();
    test02();
    return 0;
}