//To set all elements of an array to a specific non-zero value, use a loop or std::fill;
#include<iostream>
#include<algorithm>
using namespace std;
int main( ){
      int arr[5] = {2,4,6,8,10};
      cout<<"Your array before using FILL : ";
      for( int i=0 ; i<5 ; i++ )
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      cout<<"your array after using FILL : ";
      fill(arr,arr+5,9);
      for( int i=0 ; i<5 ; i++ )
      {
        cout<<arr[i]<<" ";
      }
      return 0;
}