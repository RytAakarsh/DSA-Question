//Divide two number using binary search 
#include<iostream>
using namespace std;
int divide ( int dividend , int divisor ){
    int s=0;
    int e=dividend;
    int mid = s+(e-s)/2;
    int ans = -1;
    while ( s<=e ){
        if ( mid*divisor == dividend ){
            ans = mid;
            break;
        }
        if ( mid * divisor > dividend ){
            //left search 
            e = mid -1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main (){
    int dividend;
    cout<<"Enter your Dividend : ";
    cin>>dividend;
    int divisor;
    cout<<"Enter your divisor : ";
    cin>>divisor;
    double ans = divide( dividend , divisor );
    int precision;
    cout<<"Enter your precision : ";
    cin>>precision;
    double step = 0.1;
    for ( int i=0 ; i<precision ; i++ ){
        for ( double j = ans ; j*divisor<=dividend ; j=j+step ){
          ans = j;
        }
        step = step/10;
    }
    cout<<"Your answer is "<<ans<<endl;
    return 0;
}