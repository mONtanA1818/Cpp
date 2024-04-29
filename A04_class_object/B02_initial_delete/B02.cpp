#include <iostream>
using namespace std;

class Person
{
    // 分类
    //      按照类型分类    无参构造(默认构造) 和 有参构造
    //      按照类型分类    普通构造    拷贝构造
private:
public:

    int age;
    Person();
    Person(int a);
    Person(const Person &p);
    ~Person();
};
//  普通构造函数
Person::Person()
{
    cout << "person无参构造函数的调用" << endl;
}

Person::Person(int a)
{
    age=a;
    cout << "person有参构造函数的调用" << endl;
}


//  拷贝构造函数

Person::Person(const Person &p)
{
    // 将传入的人身上的所有属性, 拷贝到我身上
    cout<<"person拷贝构造函数被调用"<<endl;
    age=p.age;
}

Person::~Person()
{
    cout << "Person析构函数的调用" << endl;
}

// 调用
void test01(){
    // 1,括号法
    Person p;  //默认构造
    Person p2(10);  //有参构造
    Person p3(p2);   //拷贝构造
    
    
    // 注意事项
    // 调用默认构造函数时候, 不要加()
    // 因为下面这行代码, 编译器会认为是一个函数的声明, 不会认为在创建对象;
    // Person p1();

    cout<<"p2的年龄为:  "<<p2.age<<endl;
    cout<<"p3的年龄为:  "<<p3.age<<endl;
    // 2,显示法
    Person p2 = Person(10);  //  有参构造
    Person p3= Person(p2);  // 拷贝构造

    Person(10);  //  匿名对象  特点: 当前行结束后, 系统会立即回收掉匿名对象
    cout<<"aaaaaaaaaa"<<endl;
    // 注意事项2
    // 不要利用拷贝构造函数 初始化匿名对象  编译器会认为Person(p3) ==Person p3;
    // Person(p3);


    // 3,隐式转换法
    Person p4 = 10; //相当于 Person p4 = Person(10);    有参构造
    Person p5 = p4; //拷贝构造

}


int main(){
    test01();

    return 0;
}