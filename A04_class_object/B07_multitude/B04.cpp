#include <iostream>
using namespace std;

// 多态案例2 制作饮品

class AbstractDrinking{
    public:
    // 煮水
    virtual void Boil()=0;

    // 冲泡
    virtual void Brew()=0;

    // 导入杯中
    virtual void pourInCup()=0;

    // 加料
    virtual void PutSomeThing()=0;

    // 制作饮品
    void makeDrink(){
        Boil();
        Brew();
        pourInCup();
        PutSomeThing();
    }
};

// 制作咖啡
class Coffee : public AbstractDrinking{
    public:
    // 煮水
    virtual void Boil(){
        cout<<"正在煮水"<<endl;
    };

    // 冲泡
    virtual void Brew(){

        cout<<"冲泡"<<endl;
    };
    // 导入杯中
    virtual void pourInCup(){
        cout<<"倒入杯中"<<endl;
    };

    // 加料
    virtual void PutSomeThing(){
        cout<<"加入糖和牛奶"<<endl;
    };
};

// 制作绿茶

class Tea : public AbstractDrinking{
    public:
    // 煮水
    virtual void Boil(){
        cout<<"正在矿泉水"<<endl;
    };

    // 冲泡
    virtual void Brew(){

        cout<<"冲泡"<<endl;
    };
    // 导入杯中
    virtual void pourInCup(){
        cout<<"倒入杯中"<<endl;
    };

    // 加料
    virtual void PutSomeThing(){
        cout<<"加入枸杞"<<endl;
    };
};

void doWork(AbstractDrinking * abs){
    abs->makeDrink();
    delete abs; // 释放
}

void test01(){
    //制作咖啡
    doWork(new Coffee);
    cout<<"------------------------"<<endl;
    // 制作茶叶
    doWork(new Tea);
}

int main(){
    test01();
    return 0;
}