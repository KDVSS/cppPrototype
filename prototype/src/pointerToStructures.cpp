#include <iostream>

using namespace std;

struct struct2
{
    int p;
    int q;
};

struct struct1
{
    int x;
    int y;
    struct2 structVar2;
};

struct pointStruct3
{
    int p = 3;
    int q = 4;
};

struct pointStruct2
{
    int x = 1;
    int y = 2;
    pointStruct3 pointStruct3Var;
};

struct pointStruct1
{
    int final = 20;
    pointStruct2 pointStruct2Var;
};

typedef unsigned int myInt;

int main()
{
    int a = 5;
    int *b = &a;
    std::cout << a << std::endl;
    cout << *b << endl;
    cout << "*****" << endl;

    struct1 structVar1;
    structVar1.x = 5;
    structVar1.y = 10;
    structVar1.structVar2.p = 7;
    structVar1.structVar2.q = 12;
    cout << "structVar1.x: " << structVar1.x << endl;
    cout << "structVar1.y: " << structVar1.y << endl;
    cout << "structVar1.p: " << structVar1.structVar2.p << endl;
    cout << "structVar1.q: " << structVar1.structVar2.q << endl;
    cout << "**End of Structures**" << endl;

    pointStruct1 pointStruct1Var;
    pointStruct1 *ptr = &pointStruct1Var;

    cout << "(*ptr).final: " <<  (*ptr).final << endl;
    cout << "ptr->final: " << ptr->final << endl;
    cout << "ptr->struct1PointStruct1.structVar2.p: " << ptr->pointStruct2Var.pointStruct3Var.p << endl;

    myInt abc = 123;
    cout << "myInt abc: " << abc << endl;
}
