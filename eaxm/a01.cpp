#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    /* data */
public:
    string m_name;
    int m_class;
    int m_cppsocre;
    string m_otherhobby;
    string m_id;
    student(string name, string id, int classNum, int cppscore, string otherhobby)
    {
        m_name = name;
        m_class = classNum;
        m_cppsocre = cppscore;
        m_otherhobby = otherhobby;
        m_id = id;
    };
    void print_stuinfo()
    {
        cout << "姓名: " << m_name << endl;
        cout << "班级: " << m_class << endl;
        cout << "学号: " << m_id << endl;
        cout << "cppscore: " << m_cppsocre << endl;
        cout << "其他爱好: " << m_otherhobby << endl;
    }
};

int main()
{
    student s1("李浩正", "23140172", 5, 100, "篮球,游戏,电影");
    s1.print_stuinfo();
    student s2 = s1; // 使用复制构造函数创建s2，它是s1的副本
    // 修改s2的成员信息
    s2.m_name = "张三";
    s2.m_id = "54235234";
    s2.m_class = 4;
    s2.m_cppsocre = 90;
    s2.m_otherhobby = "音乐,旅行";
    // 调用成员函数输出s2的信息
    s2.print_stuinfo();
    return 0;
}
