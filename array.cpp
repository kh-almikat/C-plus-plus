#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   
    int marks[5];
    int x;

   for(x=0; x<5; x++)
   {
       cout << "Marks for student" << x+1 <<": ";
       cin >> marks[x];
   }

    for(x=0; x<5; x++)
    {
        cout << marks[x] << endl;
    }

   return 0;
}