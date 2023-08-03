#include <iostream>

#define failed = 1;

using namespace std;

enum classAlpha  
{
    rank0, // 0
    rank1, // 1
    rank2,  // 2
    rank3
};

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec};
 
enum State {LessThan10, GreaterThan10, EqualTo10};

enum logic {First, Second = 9, Third, Fourth = 100, Fifth};

int main()
{
   int i;
   for (i=0; i<=12; i++)     
      printf("%d ", i);
   cout << endl;
   int a, b, c;
   a = 5;
   b = 6;
   c = a + b; // c = 11
   enum State state;
   if (c > 10)
   {
       state = GreaterThan10;
   }
   if (c < 10)
   { 
       state = LessThan10;
   }
   cout << state << endl;
       
   return 0;
}