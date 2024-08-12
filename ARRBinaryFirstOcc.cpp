//first occurence of an element 
#include<iostream>
#include<vector>
using namespace std;
int firstocc ( vector<int>arr , int target ){
    int s = 0;
    int e = arr.size()-1; 
    int mid = s+ (e-s)/2;
    int ans = -1;
    while ( s<=e ){
        if ( arr[mid] == target ){
            ans = mid;
          e=mid-1;
        }
        else if ( target < arr[mid ]) {
            //move left 
            e = mid-1;
        }
        else {
            s = arr[mid] + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main (){
    vector<int>arr{2,4,4,4,4,4,6,8,9};
    int target = 4;
    int ans = firstocc( arr , target );
        if ( ans == -1 ){
        cout<<"Element you want to search in array is not found"<<endl;
    }
    else {
        cout<<"Index of first occurence element is : "<<ans<<endl;
    }
    return 0;
}