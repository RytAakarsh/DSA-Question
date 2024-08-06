//function for printing only prime till N 
#include<iostream>
using namespace std ;
bool checker ( int n )
{
    int i=2;
    for ( ; i<n ; i++)
    {
        if ( n%i != 0 )
        { return true ;
        }
        else {
            return false;
        }
    }
}
int main ( ) {
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    bool prime = checker ( n );
    if ( prime )
    { 
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
}