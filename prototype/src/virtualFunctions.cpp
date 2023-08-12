#include <iostream>

using namespace std;

class parent
{
    public:
        virtual void myFunction()
        {
            cout << "myfunction from parent class is called" << endl;
        }

        int a = 10;
};

class child : public parent
{
    public:
        void myFunction()
        {
            cout << "myfunction from child class is called" << endl;
        }
};

int main()
{
    parent* objParent;

    child objChild;
    objParent = &objChild;

    objParent->myFunction();
    cout << objParent->a;
}