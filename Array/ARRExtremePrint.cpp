//printing extreme point 
//input 1,2,3,4,5,6
//output 1,6,2,5,3,4
#include<iostream>
using namespace std;
int printarr ( int arr[] , int size ){
    for ( int i=0 ; i<size ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int extreme ( int arr[] , int size )
{
    int start = 0;
    int end = size-1;
    while( start <= end )
    {
        if ( start == end ){
            cout<<arr[start]<<" ";
        }
        else
        {
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}
int main (){
    int arr[7] = {10,20,30,40,50,60,70};
    int size = 7;
    printarr( arr , size );
    extreme( arr , size );
    return 0; 
}