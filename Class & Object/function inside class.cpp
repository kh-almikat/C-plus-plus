#include <bits/stdc++.h>
using namespace std;

class student{
    public:
        int math, english;
        string name;
        student(string name, int math, int english)
        {
            this->english = english;
            this->math = math;
            this->name = name;
        }

    void total()
    {
        cout << name << " " << "total mark = " << math + english << endl;
    }
};
int main() 
{
    student karim("karim", 50, 75);
    karim.total();

    student rahim("rahim", 55, 45);
    rahim.total();

    student rajjak("rajjak", 51, 65);
    rajjak.total();
}