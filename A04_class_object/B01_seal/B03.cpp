#include<iostream>
#include<string>
using namespace std;

// 访问权限 
// 公共权限 public  类内外均可访问
// 保护权限 protected 仅在类内可以访问   儿子可以访问父亲中的保护内容
// 私有权限  private   仅在类内可以访问  儿子不可以访问父亲的私有内容

class Person{
public:
    // 公共权限
    string m_Name; // 姓名

protected:
    // 保护权限

    string m_Car;  //汽车

private:
    // 私有权限
    int m_Password; // 银行卡密码

public:
    void func(){
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 12345;
    }
};


int main(){
    Person p1; // 实例化具体对象
    p1.m_Name="李四";
    // p1.m_Car = "bmw";  // 保护权限内容, 在类外访问不到;
    // p1.m_Password ="643435";  // 私有权限内容, 在类外访问不到


    return 0;
}