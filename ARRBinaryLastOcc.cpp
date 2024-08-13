#include<iostream>
#include<vector>
using namespace std;
int lastocc ( vector<int>arr , int target ){
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while( s <= e ){
        if ( arr[mid] == target ){
            ans = mid;
            s = mid + 1;
        }
        else if ( arr[mid] > target ){
            //left search 
            e = mid-1;
        }
        else {
         // right search 
         s = mid+1;
        }
        mid = s + ( e-s)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{2,3,4,4,4,4,4,6,7,8,9};
    int target = 4;
    int val = lastocc( arr , target );
    cout<<"Last occurence of your target is : "<<val<<endl;
    return 0;
}