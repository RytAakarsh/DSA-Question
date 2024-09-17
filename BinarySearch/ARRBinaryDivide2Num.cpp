//Divide two number using binary search 
#include<iostream>
#include<cmath>
using namespace std;
int divide ( int dividend , int divisor ){
    int s=0;
    int e= abs(dividend);
    int mid = s+(e-s)/2;
    int ans = -1;
    while ( s<=e ){
        if ( mid*abs(divisor) == abs(dividend) ){
            ans = mid;
            break;
        }
        if ( mid * abs(divisor) > abs(dividend) ){
            //left search 
            e = mid -1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    if ( dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0 ) {
        return ans;
    }
    else {
        return -ans;
    }
}
int main (){
    int dividend;
    cout<<"Enter your Dividend : ";
    cin>>dividend;
    int divisor;
    cout<<"Enter your divisor : ";
    cin>>divisor;
    double ans = divide( dividend , divisor );
    abs(ans);
    int precision;
    cout<<"Enter your precision : ";
    cin>>precision;
    double step = 0.1;
    for ( int i=0 ; i<precision ; i++ ){
        for ( double j = ans ; j*abs(divisor)<=abs(dividend) ; j += step ){
            ans = j;
        }
        step = step / 10;
        }
    if ( dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0 ) {
        cout<<"Your answer is : "<<ans<<endl;
    }
    else {
        cout<<"Your answer is : "<<-ans<<endl;
    }
    return 0;
}