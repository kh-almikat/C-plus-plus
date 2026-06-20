#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    double gpa;

    student (string name, int age, double gpa) 
    {
        this->name = name; 
        this->age = age;
        this->gpa = gpa;
    }

};

int main() 
{
    student rahim("Alice", 20, 3.15); 
    student karim("Bob", 22, 3.5);

    cout << rahim.name << " " << rahim.age << " " << rahim.gpa << endl;
    cout << karim.name << " " << karim.age << " " << karim.gpa << endl;
}