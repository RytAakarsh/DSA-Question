//finding maximum number in an array
#include<iostream>
#include<climits>
using namespace std;
int printarr ( int arr[] , int size ){
    for ( int i=0 ; i<size ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int maxim ( int arr[] , int size )
{
    int maxi = INT_MIN;
    for ( int i=0 ; i<size ; i++ ){
        if ( arr[i] > maxi ) {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main (){
    int arr[] = { 2,23,44,67,1,8,90 };
    int size = 7;
    printarr ( arr , size );
    int maxi = maxim ( arr , size );
    cout<<"maximum number in array is "<<maxi;
    return 0;
}