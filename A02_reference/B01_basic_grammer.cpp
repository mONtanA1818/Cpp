#include <iostream>
using namespace std;
int main()
{

    // 引用的基本语法
    // 数据类型 &别名 = 原名;
    int a = 10;
    int &b = a;
    cout << "b的值为:" << b << endl;
    cout << "a的值为:" << a << endl;

    b = 100;

    cout << "b的值为:" << b << endl;
    cout << "a的值为:" << a << endl;
 
    return 0;
}