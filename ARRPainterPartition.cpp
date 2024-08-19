// Dilpreet wants to paint his dog's home that has n boards with different lengths. 
// The length of ith board is given by arr[i] where arr[] is an array of n integers.
//  He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 
// The problem is to find the minimum time to get this job done if all painters start together with
//  the constraint that any painter will only paint continuous boards, 
//  say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.
#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
   bool ispossiblesolution(int arr[], int n, int k, long long mid) {
        int workers = 1;
        long long totalTime = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                return false;
            }

            if (totalTime + arr[i] > mid) {
                workers++;
                totalTime = arr[i];
                if (workers > k) {
                    return false;
                }
            } else {
                totalTime += arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
           long long start = 0;
        long long end = accumulate(arr, arr + n, 0LL);
        long long ans = -1;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (ispossiblesolution(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1;  
            } else {
                start = mid + 1; 
            }
        }

        return ans;
    }
int main ( ){
    int arr[] = {5,10,30,20,15};
    int n = 5;
    int k = 3;
    cout<<minTime(arr , n , k );
    
}