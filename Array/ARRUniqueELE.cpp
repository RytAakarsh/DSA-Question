//finding unique element in an array 
//i/p - a[] = {1,2,3,1,2,4,4,5,5}
//o/p - a[] = {3}
//xor operator gives 0 on same value
//and it gives 1 on different value
#include<iostream>
#include<vector>
using namespace std ;
int uniquearr ( vector<int>arr ){
    int ans=0;
    for( int i=0 ; i<arr.size() ; i++ ){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main (){
    vector<int>arr{1,2,5,1,2,4,3,3,4};
    int unique = uniquearr( arr );
    cout<<"the unique element in array "<<unique<<endl;
    return 0;
}