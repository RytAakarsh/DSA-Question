// code become perfect after learning dynamic programming 
#include<iostream>
#include<vector>
using namespace std;
int robbing ( vector<int>& nums , int i ) {
   if ( i >= nums.size() ){
    return 0;
   }

   int robamt1 = nums[i] + robbing( nums , i+2 );
   int robamt2 = robbing( nums , i+1 );
   return max( robamt1 , robamt2 );
}
int main (){
    vector<int>nums{1,2,3,1};
    int i=0;
    cout<<"Maximum amout that can robber rob is : "<<robbing( nums , i )<<endl;
    return 0;
}