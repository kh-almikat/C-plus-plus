#include <iostream>
using namespace std;

class Student 
{

    public: 

        int id;
        double gpa;

        void display()
        {
            cout << id << "    " << gpa << endl;
        }

        void setvalue(int x, double y)
        {
            id = x;
            gpa = y;
        }

};

int main()
{

     cout << "ID" << "  " << "   GPA" << endl;
     cout << "-----------"<< endl;


    Student s1,s2;   // object creation

    s1.setvalue(101, 3.92);
    s1.display();

    s2.setvalue(102, 3.44);
    s2.display();

    return 0;
}