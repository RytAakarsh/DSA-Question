// taking input in 2D Array
#include<iostream>
using namespace std;
int main(){
   int  arr[3][3];
   int row = 3;
   int col = 3;
   //TALING INPUT
   cout<<"Enter your input element in array : "<<endl;
   for ( int i=0 ; i<row ; i++ ){
    for ( int j=0 ; j<col ; j++ ){
        cin>>arr[i][j];
    }
   }
   cout<<"printing row wise array : "<<endl;
   for ( int i=0 ; i<row ; i++ ){
    for ( int j=0 ; j<col ; j++ ){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}