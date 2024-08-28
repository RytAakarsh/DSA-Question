#include<iostream>
#include<vector>
using namespace std;
int search ( vector<int>arr , int target ){
    int s=0;
    int e=arr.size()-1;
    int ans = arr.size();
    while ( s<=e ){
        int mid = s+(e-s)/2;
        if ( arr[mid]>=target ){
            ans = mid;
            e = mid-1;
        }
        else {
            s = mid+1;
        }
    }
    return ans;
}
int main (){
    vector<int>arr{1,2,4,6,7,8};
    int target = 5;
    int ans = search( arr , target );
    cout<<"Best position for your target in given array is : "<<ans<<endl;
    return 0;
}