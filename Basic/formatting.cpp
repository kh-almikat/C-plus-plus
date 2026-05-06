#include <iostream>
#include <iomanip> //for setprecision

using namespace std;

int main()
{
    float num1, num2, result;
    cout << "Enter num1 & num2 : ";
    cin >> num1 >> num2;

    cout << showpoint; // to show decimal point

    result = num1 + num2;
    // setw is used to set width
    cout << setw(10) << "sum is : " << result << endl; 
    

    result = num1 - num2;
    cout <<setw(10) << "sub is : " << result << endl;

    cout << noshowpoint; // to hide decimal point
    result = num1 * num2;
    cout << setw(10) << "Mul is : " << result << endl;

    cout << fixed; // to use fixed-point notation
    // to set number of digits after decimal point
    cout << setprecision(5); 
    result = num1 / num2;
    cout << setw(10) << "div is : " << result <<endl;

    return 0;
}