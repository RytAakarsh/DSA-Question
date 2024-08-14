//spiral print in a matrrix
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralprint ( vector<vector<int>>arr , int m , int n ){
    int row=0;
    int  collast = n-1;
    int rowlast = m-1;
    int col = 0;
    int element = m*n;
    int count = 0;
    vector<int>ans;
    while ( count < element ){
        for ( int i=col ; i<=collast && count < element ; i++ ){
            ans.push_back(arr[row][i]);
            count++;
        }
                    row++;
        for( int i=row ; i<=rowlast && count < element ; i++ ){
            ans.push_back(arr[i][collast]);
            count++;
        }
                    collast--;
        for ( int i=collast ; i>=col && count < element ; i--){
            ans.push_back(arr[rowlast][i]);
            count++;
        }
        rowlast--;
        for ( int i=rowlast ; i>=row && count < element ; i-- ){
            ans.push_back(arr[i][col]);
            count++;
        }
        col++;
    }
    return ans;
}
int main (){
    vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};
    int m = 3;
    int n = 3;
    vector<int>ans = spiralprint( arr , m , n );
    for ( auto val : ans ){
        cout<<val<<" ";
    }
    return 0;
}