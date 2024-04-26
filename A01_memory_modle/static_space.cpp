#include<iostream>
using namespace std;


// 全局变量
int g_a =7;
int g_b =7;


// 全局常量
const int c_g_a =10;
const int c_g_b =10;
int main(){

    //局部变量
    int  a= 10;
    int b = 10;
    cout<<"局部变量a的地址为:  "<<(long long)&a<<endl;
    cout<<"局部变量b的地址为:  "<<(long long)&b<<endl;

    cout<<"全局变量a的地址为:  "<<(long long)&g_a<<endl;
    cout<<"全局变量b的地址为:  "<<(long long)&g_b<<endl;
    
    // 静态变量
    static int s_a =10;
    static int s_b =10;
    cout<<"静态变量a的地址为:  "<<(long long)&s_a<<endl;
    cout<<"静态变量b的地址为:  "<<(long long)&s_b<<endl;
    
    // 字符串常量
    cout<<"字符串hello world常量区: "<<(long long)&"hello world"<<endl;



    // 全局常量
    cout<<"全局常量a的地址为:  "<<(long long)&g_a<<endl;
    cout<<"全局常量b的地址为:  "<<(long long)&g_a<<endl;


    // 局部常量

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout<<"局部常量c_l_a的地址为:  "<<(long long)&c_l_a<<endl;
    cout<<"局部常量c_l_b的地址为:  "<<(long long)&c_l_b<<endl;


    // system("pause");
    return 0;
}
