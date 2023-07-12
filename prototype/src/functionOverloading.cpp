//
//  main.cpp
//  Lesson 8.1(Function Overloading)
//
//  Created by durgasri mouli on 25/04/17.
//  Copyright Â© 2017 durgasri mouli. All rights reserved.
//

#include <iostream>
using namespace std;
class overload
{
public:
    int max(int, int);
    float max(float, float);
};
int overload::max(int num1, int num2)
{
    if (num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
float overload::max(float num1, float num2)
{
    if (num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }

}
int main()
{
    overload ob;
    cout<<ob.max(2,3)<<endl;
    cout<<ob.max(2.5F,3.5F)<<endl;
    return 0;
}