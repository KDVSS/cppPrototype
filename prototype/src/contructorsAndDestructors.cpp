#include <iostream>
#include <string.h>

using namespace std;

class Parent
{
private:
    int a;
protected:
    int exampleProtectedParameter;
public:
    int xyz = 30;
    Parent()
    {
        a = 10;
        cout << "Parent constructor called, assigning a: "   << a << endl;
    }
    void print()
    {
        cout << "print() from parent class is called, printing a: " << a << endl;
    }

    ~Parent()
    {
        cout << "Parent destructor called" << endl ;
        if(a != 0) 
        {
            a = 0;
            cout << "Clearing a: "   << a << endl;
        }
    }
};

class Child : public Parent
{
    int b;
public:
    Child()
    {
        b = 10;
        exampleProtectedParameter = 20;
        cout << "Child constructor called, assigning b: " << b 
        << " and exampleProtectedParameter: " << exampleProtectedParameter << endl;
    }
    ~Child()
    {
        cout << "Child destructor called" << endl ;
        if(b != 0) 
        {
            b = 0;
            cout << "Clearing b: "   << b << endl;
        }
    }
};

void func()
{
    Child objChild;
    objChild.print();

    objChild.~Child();
    objChild.print();

    cout << "func() finished" << endl;
}


int main()
{
    func();
    cout << "main() finished" << endl;
}