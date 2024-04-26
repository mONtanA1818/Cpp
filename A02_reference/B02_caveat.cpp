#include <iostream>
using namespace std;

int main()
{

    // 引用必须要初始化
    // int &b;  // 错误的,必须要给出原名

    // 初始化后, 就不可以更改引用所指向的原名了
    int a = 10;
    int c = 101;
    int &b = a;
    // int &b = c;

    cout << b << endl;
    return 0;
}
