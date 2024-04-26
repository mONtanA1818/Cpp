#include <iostream>
using namespace std;

const double PI = 3.14;


// 定义一个类
class Circle
{
public:
    int m_r;   // 半径
    double calculate_ZC()
    {
        return 2*PI*m_r;
    }

    double calculate_area(){
        return PI*m_r*m_r;
    }
}; 


int main()
{
    Circle c1; // 实例化一个对象
    c1.m_r=10;
    cout<<"c1的周长为"<<c1.calculate_ZC()<<endl;
    cout<<"c1的面积为"<<c1.calculate_area()<<endl;
    return 0;
}