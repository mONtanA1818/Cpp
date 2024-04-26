#include <iostream>
#include<string>

using namespace std;

class student{
    public:

        // 成员
        string name;
        int number;

        // 显示学生信息
        void print(){
            cout<<"该学生的姓名为"<<name<<endl;
            cout<<"该学生的学号为"<<number<<endl;
        }

        // 给姓名赋值

        void setName(string a,int b){
            name= a;
            number =b;
        }
};


int main(){
    student s1;
    s1.setName("丁真",192138964);
    s1.print();
    return 0;

}