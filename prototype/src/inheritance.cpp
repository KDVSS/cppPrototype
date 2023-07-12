//
//  main.cpp
//  Lesson 9.1 (Inheritance)
//
//  Created by durgasri mouli on 25/04/17.
//  Copyright Â© 2017 durgasri mouli. All rights reserved.
//

#include <iostream>
using namespace std;
class furniture
{
protected:
    char color[12];
    int width;
    int height;
};
class bookshelf:public furniture
{
private:
    int no_shelves;
public:
    void accept()
    {
        cout<<"Enter color"<<endl;
        cin>>color;
        cout<<"Enter width"<<endl;
        cin>>width;
        cout<<"Enter height"<<endl;
        cin>>height;
        cout<<"Enter No_shelves"<<endl;
        cin>>no_shelves;
    }
    void display()
    {
        cout<<"Color is :"<<color<<endl;
        cout<<"Width is :"<<width<<endl;
        cout<<"Height is :"<<height<<endl;
        cout<<"Number of Shelves is :"<<no_shelves<<endl;
    }
};
class chair:public furniture
{
private:
    int no_legs;
public:
    void accept()
    {
        cout<<endl<<"Enter color"<<endl;
        cin>>color;
        cout<<"Enter width"<<endl;
        cin>>width;
        cout<<"Enter height"<<endl;
        cin>>height;
        cout<<"Enter No_legs"<<endl;
        cin>>no_legs;
    }
    void display()
    {
        cout<<"Color is :"<<color<<endl;
        cout<<"Width is :"<<width<<endl;
        cout<<"Height is :"<<height<<endl;
        cout<<"Number of legs is :"<<no_legs<<endl;
    }
};
int main() {
    bookshelf ob1;
    chair ob2;
    ob1.accept();
    ob1.display();
    ob2.accept();
    ob2.display();
    return 0;
}