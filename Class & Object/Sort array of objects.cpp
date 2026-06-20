#include <bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(student left, student right)
{
    if(left.marks > right.marks)
        return true;
    else if(left.marks < right.marks)
        return false;
    else
    {
        if(left.roll < right.roll)
            return true;
        else
            return false;   
    }

    //return left.marks < right.marks; 
}

int main() 
{
    int n;
    cin >> n;
    student arr[n]; 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + n, cmp);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
}