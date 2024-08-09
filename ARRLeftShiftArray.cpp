//left shift an array by one element
// a[] = {1,2,3,4,5}
// output :- a[] = {2,3,4,5,1}
#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>arr{1,2,3,4,5,10,45};
    vector<int>newarr;
    for ( int i=1 ; i<arr.size() ; i++ ){
        newarr.push_back(arr[i]);
        }
        newarr.push_back(arr[0]);
        for ( auto val : newarr ){
            cout<<val<<" ";
        }
        return 0;
    }