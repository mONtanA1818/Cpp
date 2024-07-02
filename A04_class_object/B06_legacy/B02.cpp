#include <iostream>
using namespace std;

// 继承方式

// 公共继承

class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Base1
{
public:
    void func()
    {
        m_A = 10; // 父类中的公共权限成员, 到子类中依然是公共权限
        m_B = 10; // 父类中的保护权限成员, 到子类中依然是保护权限
        // m_C =10; // 父类中的私有权限成员, 子类访问不到
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100; // 父类中的公共权限成员, 到子类中依然是公共权限
    // s1.m_B = 100; // 到来Son1中 m_B是保护权限, 因此访问不到
}

// 保护继承

// 所谓的保护继承就是将父类中的成员统统在子类中变为保护权限
class Base2
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 10; // 父亲中的公共成员, 到子类中变为保护成员
        m_B = 10; //  父类中保护成员, 到子类中变为保护成员
                  // m_C = 10;  //子类访问不到父类的private
    }
};

void test02()
{
    Son2 s1;
    // s1.m_A =100 // 在son2中 m_A为保护成员, 类外访问不到
    // s1.m_B =100 // 在son2中 m_B为保护成员, 类外访问不到
}

// 私有继承

// 所谓的私有继承就是将父类能够访问到的成员在子类中的权限统统变为私有成员
class Base3
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son3 : private Base3
{
public:
    void func()
    {
        m_A = 100; // 父类中公共成员 到子类中变为私有成员
        m_B = 100; // 父类中保护成员到子类中变为私有成员
        // m_C =100; // 父类中私有成员, 子类中访问不到
    }
};


void test03(){
    Son3 s1;
    // s1.m_A =10000; // 到了son3中变为私有成员 类外访问不到
    // s1.m_B = 100000 
}

class GrandSon3: public Son3
{
    public:
    void func()
    {
        // m_A=1000; // 到了son3时,m_A已经变为私有, 及时是儿子也访问不到
    }
};

