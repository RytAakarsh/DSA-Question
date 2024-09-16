//Printing a matrix using vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>>arr;
    vector<int>a{2,3,5,6};
    vector<int>b{2,3,9};
    vector<int>c{6,7,0,2};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
  for ( int i=0 ; i<arr.size() ; i++ ){
    //you can also use arr[0].size() but when your col is equal here b have less element as compare to a & c.
    for ( int j=0 ; j<arr[i].size() ; j++ ){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}