#include<iostream>
using namespace std;
int Addsum ( int a , int b)
{
    return a + b;
}
int main () {
    int a;
    cout<<"Enter your first number : ";
    cin>>a;
    int b;
    cout<<"Enter your second number : ";
    cin>>b;
    int sum = Addsum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum;
    return 0;
}