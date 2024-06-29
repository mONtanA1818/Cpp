#include <iostream>
using namespace std;
// // java页面
// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录, 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心, 交流论坛, 退出系统" << endl;
//     }
//     void left()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void right()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void content()
//     {
//         cout << "Java学科视频" << endl;
//     }
// };

// // python页面

// class Python
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录, 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心, 交流论坛, 退出系统" << endl;
//     }
//     void left()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void right()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void content()
//     {
//         cout << "Python学科视频" << endl;
//     }
// };

// // C++页面

// class CPP
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录, 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心, 交流论坛, 退出系统" << endl;
//     }
//     void left()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void right()
//     {
//         cout << "Java, Python, C++" << endl;
//     }
//     void content()
//     {
//         cout << "C++学科视频" << endl;
//     }
// };

// void test01()
// {
//     cout << "Java下载视频如下" << endl;
//     Java java;
//     java.header();
//     java.footer();
//     java.left();
//     java.right();
//     java.content();

//     cout << "-------------------" << endl;

//     cout << "Python下载视频如下" << endl;
//     Python py;
//     py.header();
//     py.footer();
//     py.left();
//     py.right();
//     py.content();

//     cout << "-------------------" << endl;

//     cout << "C++下载视频如下" << endl;
//     CPP cpp;
//     cpp.header();
//     cpp.footer();
//     cpp.left();
//     cpp.right();
//     cpp.content();
// }

// int main()
// {
//     test01();
//     return 0;
// }


// 继承的好处:减少重复代码
// 语法: class 子类 : 继承方式 父类
// 子类也称为派生类
// 父类也称为基类
class BasePage
{

public:
    void header()
    {
        cout << "首页, 公开课, 登录, 注册" << endl;
    }
    void footer()
    {
        cout << "帮助中心, 交流论坛, 退出系统" << endl;
    }
    void left()
    {
        cout << "Java, Python, C++" << endl;
    }
    void right()
    {
        cout << "Java, Python, C++" << endl;
    }
    virtual void content() = 0;
};

// JAVA页面
class Java : public BasePage
{
    public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};


// Python页面

class Python : public BasePage
{
    public:
    void content()
    {
        cout << "python学科视频" << endl;
    }
};


// C++页面

class CPP : public BasePage
{
    public:
    void content()
    {
        cout << "C++学科视频" << endl;
    }
};


void test01()
{
    cout << "Java下载视频如下" << endl;
    Java java;
    java.header();
    java.footer();
    java.left();
    java.right();
    java.content();

    cout << "-------------------" << endl;

    cout << "Python下载视频如下" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.right();
    py.content();

    cout << "-------------------" << endl;

    cout << "C++下载视频如下" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.right();
    cpp.content();
}

int main()
{
    test01();
    return 0;
}