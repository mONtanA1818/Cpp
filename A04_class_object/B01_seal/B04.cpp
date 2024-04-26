#include <iostream>
#include<string>
 using namespace std;
// struct 和 class的区别

struct c1
{
    int a_num;    // 默认权限是公共的
};


class c2{
    int b_num; // 默认权限是私有的, 类外访问不到
};


