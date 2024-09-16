//find missing element in an array
// i/p : a[] = {1,4,3,5,3}
// o/p : 2
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void findmissing ( vector<int>arr ){
    sort(arr.begin(),arr.end());
    for ( int i=0 ; i<arr.size() ; i++ ){
        if( i+1 != arr[i] )
         cout<<i+1<<" ";
        }
        cout<<endl;
        
    }
int main (){
   vector<int>arr {1,3,3,5,3};
    findmissing( arr );
}