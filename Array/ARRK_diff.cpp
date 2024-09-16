// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

// 0 <= i, j < nums.length
// i != j
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int diff ( vector<int>nums , int k ) {
sort(nums.begin(),nums.end());
      set<pair<int,int>>ans;
    int s=0;
    int m=1;
    int diff;
    while ( m<=nums.size()-1){ 
      if ( s>= nums.size() ){
        break;
      }
      if ( m <= nums.size()-1 ){
      diff = ( nums[m]-nums[s]);
      }
      if ( diff == k ) {
       ans.insert(make_pair(nums[s], nums[m]));  
        m++;
      }
     else if ( k < diff ){
        s++;
      }
      else { 
        m++;
      }
      if ( s == m ){
        m++;
      }
    }
    return ans.size();
}
int main (){
  vector<int>nums{3,1,4,1,5};
  int k = 2;
  int ans = diff( nums , k );
  cout<<"Your answer is : "<<ans;
  return 0;
}