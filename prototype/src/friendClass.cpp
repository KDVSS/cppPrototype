#include <iostream>
#include <string.h>

using namespace std;

class Mouli
{
    private:
        int salary;
    protected:
        int age;

    public:
        Mouli()
        {
            salary = 10000;
            age = 28;
        }
        friend class Sivasai;
};

class Sivasai
{
public:
    void display(Mouli& mouli)
    {
        cout << "Displaying from Sivasai class" << endl;
        cout << "Mouli Salary: " << mouli.salary << endl;
        cout << "Mouli age: " << mouli.age << endl;
    }
};

int main()
{
    Mouli mouli;
    Sivasai sai;
    sai.display(mouli);
    return 0;
}