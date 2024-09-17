//searching an element in 2D array using binary search
#include<iostream>
#include<vector>
using namespace std;
bool search ( vector<vector<int>>arr , int target , int r , int c ){
    int s=0;
    int e=(r*c)-1;
    int mid = s+(e-s)/2;
    while ( s<=e ){
        int ri = mid/c;
        int ci = mid%c;
        if ( arr[ri][ci] == target ){
            return true ;
        }
      if ( arr[ri][ci] > target ){
        e = mid-1;
      } 
      else {
        s=mid+1;
      }
      mid = s+(e-s)/2;
    }
    return false;
}
int main (){
    vector<vector<int>>arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int target = 14;
    int r = 4;
    int c = 4;
    bool ans = search ( arr , target , r , c );
    if (ans){
        cout<<"FOUND"<<endl;
    }
    else {
        cout<<"NOT FOUND "<<endl;
    }
    return 0;
}