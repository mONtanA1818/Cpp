#include <iostream>
#include <string>
using namespace std;

// 类做友元
class Building;

class goodGay
{
private:
    /* data */
public:
    goodGay();
    ~goodGay();
    void visit();
    Building *building;
};

class Building
{
    // 告诉编译器 goodGay类是Building类的好朋友, 可以访问Building类中私有内容
    friend class goodGay;
private:
    string bedRoom;
public:
    string sittingRoom;
    Building(/* args */);
    ~Building();
};
goodGay::goodGay()
{
    building = new Building;
};

void goodGay::visit()
{
    cout << "好基友正在访问" << building->sittingRoom <<endl;
    cout << "好基友正在访问" << building->bedRoom << endl;
};

goodGay::~goodGay()
{
    delete building;
}

Building::Building(/* args */)
{
    sittingRoom = "客厅";
    bedRoom = "卧室";
}

Building::~Building()
{
}

void test01()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}