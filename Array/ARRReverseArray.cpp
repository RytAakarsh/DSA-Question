//reverse an array
//input a[] = { 10, 20, 30 , 40 }
//output a[] = { 40 , 30 , 20 , 10 }
#include<iostream>
using namespace std;
int printarr ( int arr[] , int size )
{
    for ( int i=0 ; i<size ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int reversearr ( int arr[] , int size )
{
    int start=0;
    int end=size-1;
    while( start <= end )
    {
        swap( arr[start],arr[end] );
        start++;
        end--;
    }
    printarr( arr , size );
}
int main(){
    int arr[ ] = {10,20,30,40,50,60,70};
    int size = 7;
    
    reversearr( arr , size );
    return 0;
}