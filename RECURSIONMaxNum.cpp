#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int find ( vector<int>& arr , int& n ,int i , int& maxi ){
   if ( i>=n ){
    return -1;
   }
   if ( arr[i] > maxi ){
    maxi = arr[i];
   }
   find ( arr , n , i+1 , maxi );
   return maxi;
}
int main (){
    vector<int>arr{20,10,4,9,21,6,2};
    int n = arr.size();
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    cout<<"Maximum number in given array is : "<<find( arr , n , i , maxi );
    return 0;
}
 

//         for finding minimum number 


// int find ( vector<int>& arr , int& n ,int i , int& mini ){
//    if ( i>=n ){
//     return -1;
//    }
//    if ( arr[i] < mini ){
//     mini = arr[i];
//    }
//    find ( arr , n , i+1 , mini );
//    return mini;
// }