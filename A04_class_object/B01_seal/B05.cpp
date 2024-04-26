#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    void setName(string name)
    {
        m_Name = name;
    }

    string getName()
    {
        return m_Name;
    }

    void setIdol(string Idol)
    {

        m_Idol = Idol;
    }

    int getAge()
    {
        return m_age;
    }

    void set_Age(int age = 18){
        cout<<"请输入年龄"<<endl;
        cin>>age;
        if (age>150||age<0)
        {
            cout<<"年龄"<<age<<"输入有误";
            return;
        }
        m_age=age;
    }

private:
    string m_Name;  // 姓名 可读可写
    string m_Idol;  // 偶像 只写
    int m_age = 18; // 年龄 只读
};

int main()
{

    person p1;

    // 姓名设置
    p1.setName("张三");

    // 偶像设置
    p1.setIdol("丁真");

    // cout<<p1.m_Idol<<endl; // 偶像为只写,外界不可读取

    cout << "p1对象的姓名为" << p1.getName()<<endl;


    p1.set_Age(76);
    cout << "p1对象的年龄为" << p1.getAge()<<endl;
}
