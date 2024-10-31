#include<iostream>
using namespace std;
void merge ( int* arr , int s , int e ){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    //creating array of len1 and len2 size 
    int* left = new int[len1];
    int* right = new int[len2];
    //copy value 
    int k=s;
    for ( int i=0 ; i<len1 ; i++ ){
        left[i]=arr[k];
        k++;
    }
    int l=mid+1;
    for ( int i=0 ; i<len2 ; i++ ){
        right[i]=arr[l];
        l++;
    }
    //merge logic 
    int leftindex = 0;
    int rightindex = 0;
    int mainarrindex = s;
    while ( leftindex<len1 && rightindex<len2 ){
        if ( left[leftindex] < right[rightindex] ){
            arr[mainarrindex++]=left[leftindex++];
        }
        else {
            arr[mainarrindex++]=right[rightindex++];
        }
    }
    //copy logic for left array 
    while ( leftindex < len1 ){
        arr[mainarrindex++]=left[leftindex++];
    }
    //copy logic for right array 
     while ( rightindex < len2 ){
        arr[mainarrindex++]=right[rightindex++];
    }
}
void mergesort ( int* arr , int s , int e ){
    //base case 
    if ( s>=e ){
        return ;
    }
    int mid = (s+e)/2;
    //sort left part 
    mergesort( arr , s , mid );
    //sort right part 
    mergesort ( arr , mid+1 , e );
    //now merge both the array 
    merge ( arr , s , e );
}
int main () {
    int arr[]={4,13,5,2,12};
    int n=5;
    int s=0;
    int e=n-1;
    mergesort( arr , s , e );
    for ( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}