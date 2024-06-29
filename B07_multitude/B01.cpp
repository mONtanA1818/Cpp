#include <iostream>
using namespace std;

// 多态

// 动物类

class Animal
{
public:
    // 虚函数
    virtual void Speak()
    {
        cout << "动物在说话" << endl;
    }
};

// 猫类

class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "猫猫在说话" << endl;
    }
};

// 狗类

class Dog : public Animal
{
public:
    // 重写 函数返回值类型 函数名 参数列表 完全相同
    // 子类中virtual关键字可写可不写
    void Speak()
    {
        cout << "狗狗在说话" << endl;
    }
};

// 地址早绑定 在编译阶段确定函数地址

// 如果想执行让猫说话, 那么这个函数地址就不能提前绑定, 需要在运行阶段进行绑定

// 多态满足条件
// 1, 有继承关系
// 2, 子类要重写父类的虚函数


// 动态多态使用
// 父类的指针或者引用 指向子类对象
void doSpeak(Animal &animal)
{
    animal.Speak();
};

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();
    return 0;
}