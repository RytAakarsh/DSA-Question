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
    int i=2;
    for (  ; i<n ; i++ )
    {
      bool  prime = checker ( i );
        if (prime)
        cout<<i<<" ";
    }
    return 0;
}