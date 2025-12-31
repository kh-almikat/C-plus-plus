#include<iostream>
using namespace std;
int add(int num1,int num2)
{
    int sum=num2+num1;
    return sum;
}
void result(int sum)
{
    cout<<"the sum is:"<<sum;
}
int main()
{
    int num1,num2;

    cout<<"enter two number:";
    cin>>num1>>num2;

    result(add(num1,num2));
    return 0;
}
