#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> remdup ( vector<int>arr ){
       vector<int>ans;
       sort(arr.begin(),arr.end());
       for( int i=0 ; i<arr.size() ; i++ ){
        if (arr[i]!=arr[i+1]){
          ans.push_back(arr[i]);
        }
      else  if ( arr[i]==arr[i+1]){
            ans.push_back(arr[i]);
            arr[i+1]=INT_MIN;
            i++; // modified approach //we skipping INT_MIN
        }
       }
       // removing int min 
        // vector<int>val;
        // for ( auto num : ans ){
        //     if ( num != INT_MIN ){
        //         val.push_back(num);
        //     }
        // }
       
       return ans ;
}
int main(){
   vector<int>arr{1,2,4,5,2,3};
    vector<int>ans = remdup ( arr );
    for ( auto val : ans ){
        cout<<val<<" ";
    }
    return 0;
}