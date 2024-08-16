// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. 
//The result should also be sorted in ascending order.losest 
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 vector<int> findClose(vector<int>& arr, int k, int x) {
       vector<int>ans;
       int l=0;
       int h=arr.size()-1;
         if ( l == h ){
            return arr; 
         }
       while( (h-l) >= k ){ 
        if ( (x-arr[l]) > ( arr[h]-x ) ){
            l++;
        }
        else {
            h--;
        }
       }
        for ( int i=l ; i<=h ; i++ ){
            ans.push_back(arr[i]);
        }
       
       return ans;
    }
int main (){
    vector<int>arr{1,2,3,4,5};
    int k = 4;
    int x = 3;
   vector<int>ans = findClose ( arr , k , x );
   for ( auto val : ans ){
    cout<<val<<" ";
    } 
    return 0;
}