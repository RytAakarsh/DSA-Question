//find no. ways to reach nth stair 
// condition -> one stair at a time 
//           -> two stair at a time 
//           -> three stair at a time
#include<iostream>
using namespace std;
int ways ( int n ){
    if ( n==0 || n==1 ){
        return 1;
    }
    if ( n==2 ){
        return 2;
    }
    return ways(n-1) + ways(n-2) + ways(n-3);
}
int main (){
    int n ;
    cout<<"Enter no. of stairs : ";
    cin>>n;
    int ans = ways( n );
    cout<<"Number of ways to reach on Nth stair is : "<<ans;
    return 0;
}