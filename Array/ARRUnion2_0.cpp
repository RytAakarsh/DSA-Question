//input : a[] = {1,2,3,4,5}
// b[] = {1,2,3,4,6,7}
//output : ans[] = {1,2,3,4,5,6,7}
#include<iostream>
#include<vector>
using namespace std;
vector<int> unionarr ( vector<int>arr , vector<int>brr ) {
    vector<int>ans;
    for ( int i=0 ; i<arr.size() ; i++ )
    {
        ans.push_back(arr[i]);
    }
    for ( int i=0 ; i<brr.size() ; i++ )
    {
        if ( ans[i] != brr[i] ) {
            ans.push_back(brr[i]);
        }
    }
      return ans;   
}
int main(){
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{1,2,3,4,6,7};

    vector<int>print = unionarr ( arr , brr );
    for ( auto val : print ){
        cout<<val<<" ";
    }
    return 0;
}