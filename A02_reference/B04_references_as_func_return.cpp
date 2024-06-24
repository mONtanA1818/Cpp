#include <iostream>
using namespace std;
// 1. 不要返回局部变量的引用

int &test01()
{
    // int a = 10; // 局部变量存放在栈区中
    // return a;
}


// 2.函数的调用可以作为左值


int& test02(){
    static int a =66; // 静态变量存放在全局区

    return a;
}
int main()
{

    int &ref = test01();

    cout << ref << endl;  //第一次结果正确, 是因为编译器做了保留
    cout << ref << endl;  //第一次结果错误, 因为a的内存已经被释放

    int &ref2 = test02();
    cout << ref2 << endl;  
    cout << ref2 << endl;  

    test02()=1000;


    cout << ref2 << endl;  
    cout << ref2 << endl;  
    return 0;
}