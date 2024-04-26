#include <iostream>
using namespace std;

// 占位参数
// 占位参数可以有默认参数

void func(int a, int =10){
    cout<<"this is func"<<endl;

}


int main(){
    func(10,5);
    system("pause");
}