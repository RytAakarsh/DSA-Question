//move all negative num. to right side of an array
//order maintanance not required
#include<iostream>
#include<vector>
using namespace std;
void printarr ( int arr[] , int size  ){
    for ( int i=0 ; i<size ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sorted ( int arr[] , int size ){
    int l = 0;
    int i =0 ;
    int h = size-1;
    while( i <= h ){
        if ( arr[i] < 0 ){
            swap(arr[i], arr[h]);
            h--;
        }
        else {
            swap(arr[i],arr[l]);
            i++;
            l++;
        }
    }
    printarr(arr , size );
}
int main (){
    int arr[5];
    int size=5;
    cout<<"Enter your innput element in array : "<<endl;
    for ( int i=0 ; i<5 ; i++ ){
        cin>>arr[i];
    }
    printarr(arr , size );
    cout<<"after sorting negative element : "<<endl;
    sorted(arr , size );
}