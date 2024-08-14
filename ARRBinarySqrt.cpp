//square root of any no. using binary search
#include<iostream>
#include<vector>
using namespace std;
int sqrt ( int target ){
    int s = 0;
    int e = target;
    int mid = s + (e-s)/2;
    int ans = -1;
    while ( s<=e ){
        if ( mid*mid == target ){
            ans = mid ;
            break;
        }
        if ( mid*mid > target ){
            //search in left
            e = mid -1;
        }
        else {
            ans = mid ;
            // search in right 
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main (){
    int target;
    cout<<"enter your number : ";
    cin>>target;
    double ans = sqrt( target );
    double step = 0.1;
    int precision;
    cout<<"Enter your precision : ";
    cin>>precision;
    for ( int i=0 ; i<precision ; i++ ){
        for ( double j=ans ; j*j<=target ; j=j+step ){
            ans = j;
        }
        step = step/10;
    }
    cout<<"Your final answer is "<<ans<<endl;
    return 0;
}