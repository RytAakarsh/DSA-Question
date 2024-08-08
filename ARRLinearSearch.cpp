// function for linear search in array 
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
bool find ( int arr[] , int size , int key ){
    for ( int i=0 ; i<size ; i++){
        if ( arr[i]==key ){
            return true;
        }
    }
    return false;
}
int main (){
    int arr[10];
    int size = 10;
    cout<<"Enter your element in array : ";
    for ( int i=0 ; i<10 ; i++)
    {
        cin>>arr[i];
    }
    printarr( arr , size );
    
   cout<<"Enter your key you want search : ";
   int key;
   cin>>key;
   if ( find( arr , size , key ))
   {
    cout<<"found"<<endl;
   }
   else 
   {
    cout<<"not found"<<endl;
   }
   return 0;
}