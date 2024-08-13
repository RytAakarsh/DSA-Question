//Find peak element index in a mountain
#include<iostream>
#include<vector>
using namespace std;
int peak ( vector<int>arr ){
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if ( arr[mid] < arr[mid+1] ){
            //move right 
            s = mid + 1;
        }
        else {
        e=mid; 
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int main (){
    vector<int>arr{0,10,5,50,2};
    cout<<"Index of your peak element in your array is : "<<peak( arr )<<endl;
     return 0;
}