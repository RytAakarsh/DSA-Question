#include<iostream>
using namespace std;
long long factorial ( int n ){
    //base case 
    if ( n==1 ){
        return 1;
    }
    return n * factorial(n-1);
}
int main (){
    int n;
    cout<<"Enter your Factorial No. : ";
    cin>>n;
   long long  ans = factorial( n );
    cout<<"Factorial of "<<n<<" is : "<<ans;
    return 0;
}