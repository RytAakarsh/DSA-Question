//find pivot element in an array
//maximum element in rotated & sorted array
#include<iostream>
#include<vector>
using namespace std;
int pivotele ( vector<int>arr ){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2; 
    while ( s<=e ){
        if ( s==e ){
            return s;
        }
        if ( arr[mid] > arr[mid+1] && arr[mid+1] <= e ){
            return mid ;
        }
        if ( arr[mid-1] > arr[mid] && arr[mid-1]>=0 ){
            return mid-1;
        }
        if ( arr[s] > arr[mid] ){
            //left search
            e = mid -1;
        }
        else {
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main (){
    vector<int>arr{6,8,9,10,2,4};
    int ans = pivotele( arr );
    cout<<"Pivot element in your array is : "<<arr[ans]<<endl;
    return 0;
}