#include <iostream>
#include <string>
using namespace std;

class Cube
{
public:
    void setCube(int l, int w, int h)
    {
        m_H = h;
        m_L = l;
        m_W = w;
    }

    int calculate_area()
    {
        return 2 * (m_H * m_L + m_L * m_W + m_W * m_H);
    }

    int calculate_Volumetric()
    {
        return m_H * m_L * m_W;
    }

    int get_L()
    {
        return m_L;
    }
    int get_W()
    {
        return m_W;
    }

    int get_H()
    {

        return m_H;
    }

    bool isSame(Cube &c1)
    {
        if (m_H == c1.get_H() && m_L == c1.get_L() && m_W == c1.get_W())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    int m_L;
    int m_W;
    int m_H;
};

bool isSame(Cube &c1, Cube &c2)
{
    if (c2.get_H() == c1.get_H() && c2.get_L() == c1.get_L() && c2.get_W() == c1.get_W())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cube c1;
    c1.setCube(1, 2, 3);
    Cube c2;
    c2.setCube(1,2,3);
    cout << "c1的表面积为" << c1.calculate_area() << endl;
    cout << "c1的体积为" << c1.calculate_Volumetric() << endl;

    cout<<"这是全局函数"<<endl;
    // 全局函数判断这两个正方体是否相等
    bool ret = isSame(c1,c2);
    if (ret)
    {
        cout<<"这两个正方体是相等的"<<endl;
    }else
    {
        cout<<"这两个正方体不是相等的"<<endl;

    }

    cout<<"============================="<<endl;
    // 使用局部函数判断两个正方体是否相等

    
    cout<<"这是局部函数"<<endl;
    bool ret2 = c1.isSame(c2);
    if (ret2)
    {
        cout<<"这两个正方体是相等的"<<endl;
    }else
    {
        cout<<"这两个正方体不是相等的"<<endl;

    }
    cout<<"+==========================="<<endl;
    return 0;
}