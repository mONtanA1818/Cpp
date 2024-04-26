#include <iostream>
using namespace std;
// 函数重载

// 可以让函数名相同, 提高函数复用性
// 函数重载的条件
//1, 同一个作用域下
//2 函数名称相同
//3 函数的参数类型不用, 或者个数不用, 或者好顺序不同

void func(){
    cout<<"func的调用"<<endl;
}


void func(int a){
    cout<<"func的调用!"<<endl;
}

void func(double a){
    cout<<"func的调用!T_T"<<endl;
}

void func(double a, int b){
    cout<<"func的调用^__^"<<endl;
}


void func(int a, double b){
    cout<<"func的调用@_#"<<endl;
}


int main(){

    func();
    func(2);
    func(3.21);
    func(2.1,5);
    func(1,7.4);
    return 0;

}