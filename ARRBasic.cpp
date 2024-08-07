//taking initialising an array , taking input , printing an array
#include<iostream>
using namespace std;
int main(){
    int arr [10];
    cout<<"Enter your input value in array : ";
    for ( int i=0 ; i<10 ; i++ )
    {
        cin>>arr[i];
    }
     //printing an array
     for( int i=0 ; i<10 ; i++ )
     {
        cout<<arr[i];
     }
     return 0;
}