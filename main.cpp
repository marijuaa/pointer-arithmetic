#include <iostream>
#include <math.h>
using namespace std;

/*

Hello sir!

I first will description for Pointer aritmetich

Pointer arithmetich: 

Incrase/decrase "Pointer" by one. Increment by the value "i"
This statement, which is used in cases such as reduce by the vaue
of "J" is called "Pointer arithmetich"

I will explain this very briefly and simply. so those who
have no basis may not understand.

------

I will explain the techniques firsh Later, we will
try the reinforce this by giving examples

*/

int main() {
    // Okay , Im starting...

    int a[3] = {1,2,3};
    int *p;
    p = &a[1];

    // Okay I want print "p" pointer
    cout << *p << endl; // 2

    // So, customer want print +1 "p" pointer
    cout << *(p+1) << endl;

    // So, customer not want print +1 indise number, customer want +5 number.

    cout << *p + 5 << endl;

    // So customer want change pointer indise number.

    *p++;

    cout << *p << endl; // 3

    // Okay i will good simple

    int b[5];
    int *c;
    for(int i = 0; i<5; i++)
    {
        cin >> b[i]; // I want b array number
    }
    c = &b[0];
    for(int i = 0; i < 5; i++)
    {
        cout << *(c+i) << endl;
    }

    // WTF?? ye i will descripton
    /*   
    i = 0, cout << *(c+0) == c[0]
    i = 1 cout << *(c+1) == c[1]
    ...
    i=4 cout << *(c+4) == c[4]
    
    */
} 

 /*    int a[3] = {1,2,3}; // I Create array
    int *p; // I create pointers.
    p = &a[2]; // I point array with pointer.

    cout << *p << endl; 


    // If you want add or remove Indise number

    // *p == a[2] indise number is "2"
    *p++;
    *p--;
    *p = *(p+1);
    *p = *(p-2);
    cout << *(p+1) << endl;

    // So If you want add or remove not indise number, number
    // Example indise number: 1, number: 2 -> you want 2+5

    int x; 
    x = *p + 1; // *p = a[2] -> a[2] = 3, *p + 1 = 4
    cout << *p + 1 << endl;
    // yea done. we will simple */
