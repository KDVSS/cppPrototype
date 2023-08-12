
#include <iostream>
#include <string>
 
using namespace std;
 
class Person {
  private:
    string name;
    int age;
  public:
    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }
    void setName(string name) {
      this->name = name;
    }
    string getName() {
      return name;
    }
    void setAge(int age) {
      this->age = age;
    }
    int getAge() {
      return age;
    }
};

// default constructor
class Construc
{
    public:
        Construc() 
        {
            cout << "constructor is called" << endl;
        }
};
 
int main() {
  Person objPerson("Jonh", 30);
  
  cout << "Name: " << objPerson.getName() << endl;
  cout << "Age: " << objPerson.getAge() << endl;
 
  objPerson.setName("Jane Doe");
  objPerson.setAge(32);
 
  cout << "Name: " << objPerson.getName() << endl;
  cout << "Age: " << objPerson.getAge() << endl;
 
  Construc a;
  return 0;

}