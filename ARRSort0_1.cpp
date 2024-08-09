//sort 0 and 1 in an array
//input a[] = {0,1,1,0,0,1,1,1}
//output a[] = {0,0,0,1,1,1,1,1}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,0,1,1,1,0,0,0};
    int start=0 ;
    int end = arr.size()-1;
    int i=0;
    while(i!=end){
        if ( arr[i] == 0 ){
            swap(arr[i],arr[start]); 
            i++;
        }
        else {
        swap(arr[i],arr[end]);
         end--;
        }

    }
    for ( auto val : arr ){
        cout<<val<<" ";
    }
    return 0;
}