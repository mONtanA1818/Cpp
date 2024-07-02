#include <iostream>
using namespace std;

// 纯虚函数和抽象类
class Base
{
public:
    // 纯虚函数
    // 只要有一个纯虚函数, 这个类称为抽象类
    // 抽象类特特点:
    // 1, 无法实例化对象
    // 2, 抽象类中的子类 必须要重写父类中的纯虚函数, 否则也属于抽象类
    virtual void func() = 0;
};

class Son : public Base
{
    virtual void func()
    {
        cout << "func 调用" << endl;
    };
};

void test01()
{
    // Base b;
    // new Base;
    // 不管实在栈上也好, 堆区也好, 抽象类均无法实例化
    Son s1; // 子类必须重写父类中的纯虚函数, 否则无法进行实例化
    Base *base = new Son;
    base->func();

};

int main()
{
    test01();
    return 0;
}