#include <iostream>
using namespace std;

// 函数调用运算符重载
// 仿函数
class MyPrint
{
    public:

        void operator()(string test){
            cout<<test<<endl;
        }
    private:
};

class MyAdd
{
    public:
        int operator()(int a,int b){
            return a+b;
        };
};


void test01(){
    MyPrint myprint;
    myprint("hello world");
}

void test02(){
    MyAdd myadd;
    int ret = myadd(1,45);
    cout<<ret<<endl;
}

int main(){
    // test01();
    test02();
    return 0;
}