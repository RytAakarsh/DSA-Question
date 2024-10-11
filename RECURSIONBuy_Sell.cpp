#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
void seller ( vector<int>& nums , int i , int& minprice , int& maxprofit ){
    //base case
    if ( i>= nums.size() ) {
        return;
    }
    if ( nums[i] < minprice ){
        minprice = nums[i];
    }
    if ( ( nums[i] - minprice ) > maxprofit ){
        maxprofit = nums[i]-minprice;
    }
    //recursion call 
    seller( nums , i+1 , minprice , maxprofit );
}
int main (){
    vector<int>nums{1,2,3,7,9};
    int minprice = INT_MAX;
    int maxprofit = INT_MIN;
    int i=0;
    seller ( nums , i , minprice , maxprofit );
    cout<<"Maximum profit is "<<maxprofit<<endl;
    return 0;
}