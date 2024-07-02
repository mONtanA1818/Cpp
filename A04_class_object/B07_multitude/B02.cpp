#include <iostream>
#include <string>
using namespace std;

// 计算器类

class calculator
{
public:
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_A + m_B;
        }
        else if (oper == "-")
        {
            return m_A - m_B;
        }
        else if (oper == "*")
        {
            return m_A * m_B;
        }
        // 如果想扩展新的功能, 需要修改源码
        // 在真实开发中 提倡 开闭原则
        // 开闭原则: 对拓展进行开放, 对修改进行关闭
    }

    int m_A;
    int m_B;
};

void test01()
{
    calculator c;
    c.m_A = 10;
    c.m_B = 10;
    cout << c.m_A << "+" << c.m_B << "=" << c.getResult("+") << endl;
    cout << c.m_A << "-" << c.m_B << "=" << c.getResult("-") << endl;
    cout << c.m_A << "*" << c.m_B << "=" << c.getResult("*") << endl;
}

// 利用多态实现计算器
// 多态好处
// 1, 组织结构清晰
// 2, 可读性强
// 3, 对于前期和后期扩展及维护性高

// 实现计算器抽象类
class AbstractCalculator
{
public:
    virtual int getResult()
    {
    }
    int m_Num1;
    int m_Num2;
};

// 加法计算器类

class AddCalculator : public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

// 减法计算器类
class SubCalculator : public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 - m_Num2;
    }
}; 

// 乘法计算器类
class MulCalculator : public AbstractCalculator
{
public:
    virtual int getResult()
    {
        return m_Num1 * m_Num2;
    }
}; 

void test02(){
    // 多态使用条件
    // 父类指针伙引用指向子类对象

    // 加法运算
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1=10;
    abc->m_Num2=10;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    // 创建在堆区记得销毁
    delete abc;

    //减法运算
    abc = new SubCalculator;
    abc->m_Num1=7;
    abc->m_Num2=3;
    cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    // 创建在堆区记得销毁
    delete abc;

    // 乘法运算
    abc = new MulCalculator;
    abc->m_Num1=7;
    abc->m_Num2=3;
    cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    // 创建在堆区记得销毁
    delete abc;
};

int main()
{
    // test01();
    test02();
    return 0;
}