#include <iostream>
using namespace std;

// 如果我们自己传入了数据,就用自己的数据, 如果没有, 那么用默认值

// 语法: 返回值类型 函数名 (形参 = 默认值)
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

// caveat

// 1,如果某个位置已经有了默认参数, 那么从这个位置往后,都学要有默认值


// 2, 声明和实现只能有一个默认参数
// int func2(int a = 10, int b = 10);

int func2(int a = 10, int b= 10)
{
    return a + b;
}

// 否则会有二义性错误, 究竟是按照声明的来编译还是按照实现的来编译呢?

int main()
{

    cout << func(10, 30) << endl;

    cout << func2() << endl;

    return 0;
}