#include <bits/stdc++.h>
using namespace std;

class teacher //class declaration
{

private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    //setter
    void set_salary(double s)
    {
        salary = s;
    }

    //getter
    double get_salary()
    {
        return salary;
    }

};

int main() 
{
    teacher t1; // object declear

    t1.name = "mikat";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.set_salary(200000);

    cout << t1.name << endl;
    cout << t1.get_salary() << endl;
}