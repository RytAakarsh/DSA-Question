//i/p- a[] : {1,2,3,4,5}
// b[] : {7,8,9}
//o/p : {1,2,3,4,5,7,8,9}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,5,6};
    vector<int>brr{9,10,8};
    vector<int>ans;
    for( int i=0 ; i<arr.size() ; i++ ){
        ans.push_back(arr[i]);
    }
    for( int i=0 ; i<brr.size() ; i++ )
    {
        ans.push_back(brr[i]);
    }
    for( auto value : ans )
    {
        cout<<value<<" ";
    }
    return 0;
}