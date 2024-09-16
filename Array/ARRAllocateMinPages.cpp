// You have n books, each with arr[i] a number of pages. m students need to be allocated contiguous books, 
// with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation 
// where the sum of the maximum number of pages in a book allotted to a student should be the minimum, 
// out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, 
// and allotment should be in contiguous order (see the explanation for better understanding).
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
bool ispossiblesol( int arr[], int n , int m , int mid ){
    int pagesum=0;
    int student=1;
    for ( int i=0 ; i<n ; i++ ){
        if ( arr[i]>mid )
         {   return false;
    }
    if ( arr[i]+pagesum > mid ){
        student ++;
        pagesum = arr[i];
    
    if ( student > m ){
        return false; 
    }
    }
    else {
        pagesum += arr[i];
    }
    
 }
 return true;
 }
    long long findPages(int n, int arr[], int m) {
        int s=0;
        int e=accumulate(arr,arr+n,0);
        int ans=-1; 
        if ( m > n ){
            return ans;
        }
        while ( s<=e ){
            int mid = s+(e-s)/2;
            if ( ispossiblesol(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return ans;
    }
    int main (){
        int arr[] = {12, 34, 67, 90};
        int n = sizeof(arr)/sizeof(int);
        int m = 2;
        long long ans = findPages( n , arr , m  );
        cout<<"your answer is "<<ans<<endl;
        return 0;
    }