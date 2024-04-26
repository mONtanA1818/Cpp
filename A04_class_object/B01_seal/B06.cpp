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


    int calculate_area(){
        return 2*(m_H*m_L+m_L*m_W+m_W*m_H);
    }

    int calculate_Volumetric(){
        return m_H*m_L*m_W;
    }

private:
    int m_L;
    int m_W;
    int m_H;
};



int main(){
    Cube c1;
    c1.setCube(1,2,3);
    cout<<"c1的表面积为"<<c1.calculate_area()<<endl;
    cout<<"c1的体积为"<<c1.calculate_Volumetric()<<endl;

    return 0;
}