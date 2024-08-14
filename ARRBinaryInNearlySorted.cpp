//binary search in nearly sorted array
#include<iostream>
#include<vector>
using namespace std;
int search ( vector<int>arr , int target ){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if ( arr[mid]==target){
            return mid;
            break;
        }
        if ( arr[mid+1]<arr.size()-1 && arr[mid+1]==target){
            return mid+1;
            break;
        }
        if ( arr[mid-1]>=0 && arr[mid-1]==target){
            return mid-1;
            break;
        }
        if ( arr[mid] > target ){
            e = mid - 2;
        }
        else {
            s = mid + 2;
        }
        return -1;
    }
}
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 40;
    int ans = search ( arr , target );
    cout<<"Index of your target : "<<ans<<endl;
    cout<<"your number : "<<arr[ans]<<endl;
    return 0;
}