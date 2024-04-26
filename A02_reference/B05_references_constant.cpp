#include <iostream>
using namespace std;
// 打印数据函数
void showValue(const int &val) // 参数加上const时,函数内部不再可以对参数的值进行修改
{
    // val =100;
    cout<<"&val = "<<val<<endl;
}

int main(){
    //  使用场景: 用来修饰形参, 防止误操作

    const int & ref = 10; // 引用必须引用一块合法的内存空间
    // 不加const的话10 也仅仅十个字面量
    // 加上const后, 编译器将代码修改, 将内存空间某一块地方的地址指向的值为10
    // 加上const之后, 变为引用变为只读,且不可以修改
    int a =1056;
    showValue(a);
    return 0;

}

