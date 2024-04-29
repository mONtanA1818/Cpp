#include <iostream>
using namespace std;


class Building
{
private:
    string m_bedRoom;
public:
    string m_sittingRoom;
    Building(/* args */);
    ~Building();
};

Building::Building(/* args */)
{
    m_bedRoom = "bedRoom";
    m_sittingRoom = "sittingRoom";
}

void visit(Building *building){
    cout<<"好基友正在访问"<<building->m_sittingRoom<<endl;
}

Building::~Building()
{
}

