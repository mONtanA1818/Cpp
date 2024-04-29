#include <iostream>
#include <string>
using namespace std;

// 成员函数做友元

class Building;

class goodGay
{
private:
public:
    Building *building;
    goodGay();
    ~goodGay();
    void visit();  // 让visit函数可以访问Building中私有成员
    void visit2(); // 让visit2函数不可以访问Building中私有成员
};

class Building
{
    friend void goodGay::visit();

private:
    string bedRoom;

public:
    string sittingRoom;
    Building();
    ~Building();
};

goodGay::goodGay()
{
    building = new Building;
};

goodGay::~goodGay()
{
    if (building != nullptr)
    {
        delete building;
        building = nullptr;
    }
};

void goodGay::visit()
{
    cout << "visit()正在访问" << building->sittingRoom << "|||" << building->bedRoom << endl;
}

void goodGay::visit2()
{
    cout << "visit2()正在访问" << building->sittingRoom << endl;
}

Building::Building()
{
    bedRoom = "卧室";
    sittingRoom = "客厅";
}

Building::~Building()
{
}

void test01()
{
    goodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test01();
    return 0;
}