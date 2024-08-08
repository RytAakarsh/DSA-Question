//using memset fxn and fill fxn
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arr[10] = {1,3,5,7,9};
    //if we want to make all element in array to zero 
    //we use MEMSET Fxn 
    //but for non-zero we use FILL Fxn 
    cout<<"your array before memset : ";
    for (int i=0 ; i<10 ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    memset(arr, 0, sizeof(arr));
    cout<<"your array after memset fxn : ";
    for ( int i=0 ; i<10 ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}