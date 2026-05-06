// Bitwise Operator -> & = and, | = or, ^ = exor, >> = right shift, << = left shift, ~ = not
#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
  int a = 32;
  int b = 12;
  int c;

  c = a & b; // bitwise and
  cout << "a & b = " << c << endl;

  c = a | b; // bitwise or
  cout << "a | b = " << c << endl;

  c = a ^ b; // bitwise xor
  cout << "a ^ b = " << c << endl;

// 2 times divided by 2
  c = a >> 2; // bitwise right shift
  cout << "a >> 2 = " << c << endl;

// 3 times divided by 2
  c = a >> 3; // bitwise right shift
  cout << "a >> 3 = " << c << endl;

// 2 times multiplied by 2
  c = a << 2; // bitwise left shift
  cout << "a << 2 = " << c << endl;
    

return 0;
}