//repeat index of first repeating element
// i/p : a[] = {1,5,3,4,3,5,6}
// o/p : 1
#include<iostream>
#include<vector>
using namespace std;
int firstrep ( vector<int>arr ){
    for ( int i=0 ; i<arr.size() ; i++ ){
        for ( int j=i+1 ; j<arr.size() ; j++ ){
            if ( arr[i] == arr[j] ){
                return i;
            }
        }
    }
    return -1;
}
int main (){
    vector<int>arr{1,5,3,4,3,5,6};
    int repeatindex = firstrep( arr );
    cout<<"Index of first repeating number is : "<<repeatindex<<endl;
}