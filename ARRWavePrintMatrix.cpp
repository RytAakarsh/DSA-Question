//wave print a matrix
#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<vector<int>>arr;
    vector<int>a{1,2,3};
    vector<int>b{5,6,7};
    vector<int>c{9,10,11};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    int i=0 ;
    int j=0 ;
    int m = arr[i].size();
    int n = arr.size();
    for ( j=0 ; j<m ; j++ ){
        if ( j%2 == 0 ){
            // j = even movement top to bottom 
            for ( i=0 ; i<n ; i++ ){
                cout<<arr[i][j]<<" ";
            }
        }
        else // j = odd movement bottom to top 
        for ( i=m-1 ; i>=0 ; i-- ){
            cout<<arr[i][j]<<" ";
        }
    }
}