#include<iostream>
#include<vector>
using namespace std;
int totalocc ( vector<int>arr , int target ){
    int first = 0;
    int last = 0;
    { 
        int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;

    while ( s<=e ){ 
        //first occ
        if ( arr [mid] == target ){
            first = mid;
            e=mid-1;
        }
      else if ( arr [mid] > target ){
        //left search 
        e = mid-1;
      }
      else {
        s = mid +1;
      }
      mid = s+(e-s)/2;
    } 
    }
    { 
         int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;

    while ( s<=e ){
        if ( arr[mid] == target ){
            last=mid;
            s=mid+1;
        }
        else if ( arr[mid] > target ){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    int total = last - first + 1;
    return total;
}
}
int main (){
    vector<int>arr{2,3,4,4,4,4,4,4,5,7,8};
    int target = 4;
    cout<<"Total number of occurence is : "<<totalocc( arr , target )<<endl;
    return 0;
}