// function for telling your number is prime or not
#include<iostream>
using namespace std;
string finder ( int n )
{
    for ( int i=2 ; i<n ; i++ )
    {
        if ( n%i == 0 )
        return "Not a Prime";
        else 
        return "Prime";
    }
}
int main ( ){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    string num = finder ( n );
    cout<<"Your number "<<n<<" is "<<num;
    return 0;
}