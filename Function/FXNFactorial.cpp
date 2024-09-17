// function for factorial of number 
#include<iostream>
using namespace std;
int factorial ( int n )
{  int f=1;
    for ( int i=1 ; i<=n ; i++ )
    {  
        f=f*i;
    }
     return f; 
}
int main ( ){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int fact = factorial ( n );
    cout<<"factorial of "<<n<<" is "<<fact;
    return 0;
}