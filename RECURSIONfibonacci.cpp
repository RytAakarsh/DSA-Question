           //fibonacci series -> next number is sum of previous two number 

#include<iostream>
using namespace std;
int fibo ( int n ){
  if ( n==0 ){
    return 0;
  }
  if ( n==1 ){
    return 1;
  }
  return fibo( n-1 ) + fibo( n-2 );
}
int main ( ){
    int n;
    cout<<"Enter your position : ";
    cin>>n;
    cout<<" Value present in fibonacci series is : "<<fibo(n);
    return 0;
}