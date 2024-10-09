#include<iostream>
#include<vector>
using namespace std;
void printsubarray_until ( vector<int>& nums , int start , int end ){
    if ( end >= nums.size() ){
        return ;
    }
    for ( int i=start ; i<end ; i++ ){
        cout<<nums[i];
    }
    cout<<endl;
    printsubarray_until( nums , start , end+1 );
}
void printsubarray ( vector<int>& nums ){
    for ( int s=0 ; s<nums.size() ; s++ ){
        int e = s+1;
        printsubarray_until( nums , s , e );
    }
}
int main ( ){
    vector<int>nums{1,2,3,4,5};
    printsubarray( nums );
    return 0;
}