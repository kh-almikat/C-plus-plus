#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int *a = new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    int *b = new int[6];

    for(int i=0;i<3;i++)
    {
        b[i] = a[i];
    }
    for(int i=3;i<6;i++)
    {
        cin>>b[i];
    }

    delete[] a; // Free the memory allocated for array a
    
    for(int i=0;i<6;i++)
    {
        cout<<b[i]<<" ";
    }
}