#include<iostream>
using namespace std;

// 对象的初始化和清理
// 1, 析构函数进行初始化操作

class Person
{
private:
    
public:
    Person();
    ~Person();
};
// 构造函数可以有参数, 可以发生重载
Person::Person()
{
    cout<<"Person构造函数的调用"<<endl;
}


// 析构函数 进行清理操作
// 对象销毁前 会自动调用析构函数,而且只会调用一次
// 没有返回值 不写void 没有参数, 不可以发生重载
Person::~Person()
{
    cout<<"Person析构函数的调用"<<endl;
}

void test01(){
    Person p1;  // 这是在栈上的数据, test01执行完毕后,释放这个对象
}

int main(){
    test01();  
    Person p2;

    system("pause");
    return 0;
}