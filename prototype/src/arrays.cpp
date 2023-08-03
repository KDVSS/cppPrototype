#include <iostream>

using namespace std;

// macros -> constants
#define SIZE_OF_MY_ARRAY_ABC 4

// enum -> constants

// Non void functions or return type functions
int abcFunc(int i)
{
    return i*2;
};

// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        // res    0000 0000
        // arr[0] 0000 1100 (12)

        // res    0000 1100
        // arr[1] 0000 1100 (12)

        // res    0000 0000
        // arr[2] 0000 1110 (14)

        // res    0000 1110
        // arr[3] 0101 1010 (90)

        // res    0101 0100
        // arr[4] 0000 1110 (14)

        // res    0101 1010
        // arr[5] 0000 1110 (14)

        // res    0101 0100
        // arr[6] 0000 1110 (14)

        // res    0101 1010
        res ^= arr[i];
    return res;
}

int main()
{
    int abc;

    // declartions = initialization
    int myArrayAbc[] = {1, 2, 3, 4, 5, 6};

    // declaration
    int myArrayPqrs[SIZE_OF_MY_ARRAY_ABC];

    for(int i = 0; i < 4; i++)
    {
        cout << "myArrayAbc: " << myArrayAbc[i] << endl;
        abc = i;
    }
    cout << "abc: " << abc << endl;

    for(int i = 1; i <= SIZE_OF_MY_ARRAY_ABC; i++)
    {
        myArrayPqrs[i] = abcFunc(i);
        cout << "myArrayPqrs: " << myArrayPqrs[i] << endl;
    }

    // declartions = initialization
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    cout << "sizeof arr[]: " << sizeof(arr) << endl;
    cout << "sizeof arr[0]: " << sizeof(arr[0]) << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occurring element is %d ", findOdd(arr, n));
}