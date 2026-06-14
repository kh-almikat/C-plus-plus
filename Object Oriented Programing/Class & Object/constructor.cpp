#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    double gpa;

    /*constructor - like function*/
    student (string n, int a, double g) // constructor function - same name as class, no return type
    {
        name = n;
        age = a;
        gpa = g;
    }

};

int main() 
{
    student rahim("Alice", 20, 3.15); // constructor function called
    student karim("Bob", 22, 3.5);

    cout << rahim.name << " " << rahim.age << " " << rahim.gpa << endl;
    cout << karim.name << " " << karim.age << " " << karim.gpa << endl;
}