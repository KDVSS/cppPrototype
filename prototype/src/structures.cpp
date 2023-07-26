#include <iostream>

using namespace std;

// Initializing variable at structure template
struct myStructure
{
    int outPutofFirstAdd;
    int outPutofSecondAdd;
    int totalOutput;
}myStructureVariable;

// Not Initializing variable at structure template
struct myBody
{
    float height;
    float weight;
};

union myUnion
{
    int age;
    char gender;
    float height;
};

// 1. This is return type function
// 2. This is non-void function
int add(int a, int b)
{
    cout << "Enter add() " << endl;
    int c;
    c = a + b;
    cout << "Output of add func: " << c << endl;
    return c;
}

// 1. This is a void function 
// 2. This is non return type function
void added(int a, int b, int c, int d)
{
    cout << "Enter added() " << endl;
    myStructureVariable.outPutofFirstAdd = add(a, b);
    myStructureVariable.outPutofSecondAdd = add(c, d);
    myStructureVariable.totalOutput = myStructureVariable.outPutofFirstAdd + myStructureVariable.outPutofSecondAdd;
    cout << "Output of added func: " << myStructureVariable.totalOutput << endl;
}

// 1. This is return type function
// 2. This is non-void function
int main()
{
    int x = 3;
    cout << "Enter main() " << endl;
    added(2, x, 4, 5);

    cout << "*****" << endl;
    cout << "Output of myStructure outPutofFirstAdd: " << myStructureVariable.outPutofFirstAdd << endl <<
    "Output of myStructure outPutofSecondAdd: " << myStructureVariable.outPutofSecondAdd  << endl <<
    "Output of myStructure totalOutput: " << myStructureVariable.totalOutput  <<endl;
    
    cout << "Size of myStructure: " << sizeof(myStructureVariable) << endl;
    
    // Initializing struct using Assignment Operator.
    struct myBody dhana;
    dhana.height = 193.5;
    dhana.weight = 128.5;
    
    cout << "*****" << endl;
    cout << "Output of myBody(dhana) height: " << dhana.height << " and weight " << dhana.weight << endl;
    
    // Initializing struct using Initializer List.
    struct myBody mouli = {195.5, 91.5};
    cout << "Output of myBody(mouli) height: " << mouli.height << " and weight " << mouli.weight << endl;
    cout << "Size of myBody: " << sizeof(myBody) << endl;
    cout << "*****" << endl;
    
    union myUnion miunEmployee;
    miunEmployee.age = 27;
    miunEmployee.gender = 'M';
    miunEmployee.height = 195.5;
    cout << "Size of myUnion(miunEmployee): " << sizeof(myUnion) << endl;
    cout << "Output of myunion(miunEmployee) age: " << miunEmployee.age << 
    ", gender: " << miunEmployee.gender << 
    ", height " << miunEmployee.height << endl;
    cout << "Size of myBody: " << sizeof(myBody) << endl;
    cout << "*****" << endl;
    
    return 0;
}