#include <iostream>
using namespace std;
#include <string>

// 虚析构和纯虚析构

class Animal
{
public:
    Animal()
    {
        cout << "Animal的构造函数调用" << endl;
    }
    // 利用虚析构可以解决 父类指针释放子类对象时不干净的问题
    // virtual ~Animal()
    // {
    //     cout << "Animal的虚析构函数调用" << endl;
    // }
    // 纯虚析构 需要声明 也 需要实现
    // 有了纯虚析构之后, 这个类也属于抽象类, 无法实例化对象
    virtual ~Animal() = 0;
    // 变为纯虚函数
    virtual void speak() = 0;
};

Animal::~Animal()
{
    cout << "Animal的纯虚析构函数调用" << endl;
};

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(name);
    }
    virtual void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }
    string *m_Name;
    ~Cat()
    {
        cout << "Cat析构函数调用" << endl;
        if (m_Name != NULL)
        {
            delete m_Name;
        }
    }
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal; // 父类的指针在析构时,  不会调用子类中析构函数, 导致子类如果有堆区属性, 出现内存泄漏
}

int main()
{
    test01();
    return 0;
}