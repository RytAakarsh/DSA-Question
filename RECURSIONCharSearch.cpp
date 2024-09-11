// i/p -> "Aakarsh"
// key -> a
// o/p -> present at 1 & 3

#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> find ( string& str , char& key , int i , vector<int>& arr ){
    if ( i>=str.size() ){
        return arr;
    }
    if ( str[i]==key ){
        arr.push_back(i);
    }
    find( str , key , i+1 , arr );
    return arr;
}
int main (){
    string str = "Aakarsh";
    char key = 'a';
    int i = 0;
    vector<int>arr;
    vector<int>ans = find ( str , key , i , arr );
    for ( auto val : ans ){
        cout<<"Found at "<<val<<endl;
    }
    return 0;
}