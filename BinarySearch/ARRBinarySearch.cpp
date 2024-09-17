//making a function Binary Search 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarysearch ( vector<int>arr , int target ){
    int start = 0 ;
    int end = arr.size()-1;
    int mid = start + ( end - start )/2;
    while ( start <= end ){
        if ( arr[mid] == target ){
            return mid;
        }
        else if ( target > mid ){
            // search in right 
            start = mid + 1;
        }
        else {
            // search in left 
            end = mid - 1;
        }
        mid = start + ( end - start )/2;
    }
    return -1;
}
int main (){
    vector<int>arr{1,2,3,4,5,6,7};
    cout<<"Enter your element you want to search : "<<endl;
    int target;
    cin>>target;
    int search = binarysearch( arr , target );
    if ( search == -1 ){
        cout<<"Element you want to search in array is not found"<<endl;
    }
    else {
        cout<<"Element found at index : "<<search<<endl;
    }
}