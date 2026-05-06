#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;  // pointer declaration
    p = &x; // pointer initialization
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of pointer p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
   
    return 0;
}