// You are given an array consisting of n integers which denote the position of a stall. 
// You are also given an integer k which denotes the number of aggressive cows. 
// You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossiblesolution ( vector<int>stalls , int n , int k , long long mid ){
    int cow = 1;
    int  distance = stalls[0];
    for ( int i=0 ; i<n ; i++ ){
        if ( stalls[i]-distance >= mid ){
        cow++;
        distance = stalls[i];
        
       if ( cow  == k ){
            return true;
        }
        }
    }
    return false;
}
long long searchposition (vector<int>stalls , long long n , int k ){
    sort(stalls.begin(),stalls.end());
      long long start = 0;
      long long end = (stalls[n-1]-stalls[0]);
      long long ans = -1;
      if ( k > n ){
        return -1;
      }
      while ( start <= end ){
        long long mid = start + ( end - start )/2;
        if (ispossiblesolution( stalls , n , k , mid )){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
      }
      return ans;
}
int main (){
    vector<int>stalls{1,2,4,8,9};
    long long n=5; 
    int k=3;
    sort(stalls.begin(),stalls.end());
    long long ans = searchposition( stalls , n , k );
    cout<<ans<<endl;
    return 0;
}