#include <bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;
        int marks;
};
int main() 
{
    int n;
    cin >> n;
    student arr[n]; //array of object
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    student min;
    min.marks = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i].marks < min.marks)
        {
            min = arr[i];
        }
    }
    cout << "Minimum marks: " << min.name << " " << min.roll << " " << min.marks << endl;
}