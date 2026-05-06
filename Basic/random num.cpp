#include<iostream>
#include<stdlib.h>  // for rand() and srand()
using namespace std;
int main()
{

    // Generate and print 5 random numbers between 0 and 100
    for(int i = 0; i < 5; ++i)
    {
        int randomNum = rand() % 100 + 1;
        cout << "Random Number " << ": " << randomNum << endl;
    }

    return 0;
}