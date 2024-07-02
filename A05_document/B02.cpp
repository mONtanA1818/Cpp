#include <iostream>
#include<fstream>
#include<string>
using namespace std;

// 文本文件 读文件
void test01(){

    // 创建流对象
    ifstream ifs;

    // 打开文件 并且判断是否打开成功
    ifs.open("text.txt", ios::in);
    
    if (!ifs.is_open())
    {
        cout<<"文件打开失败了"<<endl;
        return;
    }

    // 读数据
    
    //第一种
    // char buf[1024]{0};
    // while (ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }
    
    // ifs.close();
    
    //第二种
    // char buf[1024]={0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     cout<<buf<<endl;
    // }
    
    //第三种
    string buf;
    while (getline(ifs,buf))
    {
        cout<<buf<<endl;
    }
    
    // 第四种

    char c ;
    while ((c=ifs.get())!=EOF)  // end of file
    {
       cout<<c;
    }
    
}

int main(){
    test01();
    return 0;
}