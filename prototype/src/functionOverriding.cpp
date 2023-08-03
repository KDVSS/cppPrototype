
// C++ program for function overriding with data members
#include <iostream>
using namespace std;
 
//  base class declaration.
class Animal {
public:
    string color = "Black";
    string breed = "Unknown";
};
 
// inheriting Animal class.
class Dog : public Animal {
public:
    //string color = "Grey";
    string breed = "German";
};
 
// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived

    cout << d.color << endl;
    cout << d.breed << endl;
}