// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
//  (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

#include<iostream>
#include<vector>
#include<string>
using namespace std;
string convert ( string s , int numrows ){
    if ( numrows == 1 ) return s ;
    int i=0 , row=0;
    bool dir = 1 ; //top to bottom 
    vector<string>zigzag(numrows);
    while ( true ){
        if (dir){
            while ( row < numrows && i<s.size() ){
            zigzag[row++].push_back(s[i++]);
            }
            row = numrows - 2;
        }
        else {
            while ( row >= 0 && i<s.size() ){
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if ( i>=s.size() ) break;
        dir = !dir;
    }
    string ans = "";
    for ( int i=0 ; i<zigzag.size() ; i++ ){
        ans += zigzag[i];
    }
    return ans;
}
int main (){
    string s = "ABCDEFGHIJ";
    int numrows = 3;
    string ans = convert ( s , numrows );
    cout<<ans<<endl;
    return 0;
}