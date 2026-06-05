#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << max(x, y, z) << endl;
    cout << min(x, y, z) << endl;

    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
}