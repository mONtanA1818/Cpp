#include <iostream>
using namespace std;
// Cpu 类
class Cpu
{
public:
    virtual void calculate() = 0;
};

// 显卡类
class Graphic
{
public:
    virtual void display() = 0;
};

// 内存类

class Memory
{
public:
    virtual void storage() = 0;
};

// 厂商

// Intel

class IntelCpu : public Cpu
{
public:
    void calculate()
    {
        cout << "Intel厂商的cpu开始计算了" << endl;
    }
};

// AMD
class AmdCpu : public Cpu
{
public:
    void calculate()
    {
        cout << "AMD厂商的cpu开始计算了" << endl;
    }
};

class AMDGraphic : public Graphic
{
public:
    void display()
    {
        cout << "AMD显卡正在输出视频" << endl;
    };
};
// MU

class MuMemory : public Memory
{
public:
    void storage()
    {
        cout << "镁光内存条正在存储数据" << endl;
    };
};

// Lenovo
class LenovoMemory : public Memory
{
public:
    void storage()
    {
        cout << "联想内存条正在存储数据" << endl;
    };
};

// Nvda
class NvdaGraphic : public Graphic
{
public:
    void display()
    {
        cout << "英伟达显卡正在输出视频" << endl;
    };
};

// 电脑类
class Computer
{
public:
    Computer(Cpu *cpu, Graphic *graphic, Memory *memory)
    {
        m_cpu = cpu;
        m_graphic = graphic;
        m_memory = memory;
    };
    void doWork()
    {
        // 让零件工作起来调用接口
        m_cpu->calculate();
        m_graphic->display();
        m_memory->storage();
    }
    ~Computer()
    {
        delete m_cpu;
        delete m_graphic;
        delete m_memory;
    };

private:
    Cpu *m_cpu;
    Graphic *m_graphic;
    Memory *m_memory;
};

void test01()
{
    // Computer *pc= new Computer(new IntelCpu(),new NvdaGraphic(),new MuMemory());
    // pc->doWork();
    Computer pc2(new IntelCpu(), new NvdaGraphic(), new MuMemory());
    cout<<"pc2已经开机"<<endl;
    pc2.doWork();


    //组装
    Cpu *amdCpu = new AmdCpu;
    Graphic *amdgraphic = new AMDGraphic;
    Memory *lenovomemopry= new LenovoMemory;
    Computer pc1(amdCpu, amdgraphic, lenovomemopry);
    cout<<"pc1已经开机"<<endl;
    pc1.doWork();
}

int main()
{
    test01();
    return 0;
}