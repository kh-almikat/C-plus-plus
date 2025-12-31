#include <iostream>
using namespace std;


int main()
{
    

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int large = num1>num2 ? num1 : num2;//like if-else

    cout << "Large Number is : " << large << endl;

    return 0;
}