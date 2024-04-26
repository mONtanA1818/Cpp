#include<iostream>
using namespace std;
// 1.new的基本语法
int *func(){
    // 在堆区创建整型数据
    // new 返回的是该数据类型的指针

    int *p = new int(10);
    return p;
}



void test01(){
    int *p = func();
    cout<<*p<<endl;
    // 堆区的数据 由程序员管理开辟, 程序员管理释放
    // 如果想释放堆区的数据,利用关键字delete;
    delete p;
    cout <<*p<<endl;  // 内存已经被释放, 再次访问就是非法操作, 会报错

}


// 在堆区中利用new开辟数据

void test02()
{
    int *arr = new int [10];  // 10代表有十个元素
     for (size_t i = 0; i < 10; i++)
     {
        arr[i]=i+100;
     };

     for (size_t i = 0; i < 10; i++)
     {
        cout<<arr[i]<<endl;
     }

     // s释放堆区数组
     // 释放数组是 要加[]才可以
     delete[]  arr;
}


int main(){

    test02();
    return 0;
}