//printing a 2D Matrix 
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[2][4]={{1,2,3,4},{3,4,5,7}};
   //printing row wise
   for ( int i=0 ; i<2 ; i++ ){
    // printing column wise 
    for( int j=0 ; j<4 ; j++ ){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}