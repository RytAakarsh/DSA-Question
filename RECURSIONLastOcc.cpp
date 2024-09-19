#include<iostream>
#include<string>
using namespace std;
int find ( string& str , int i , char x , int& val  ){
    // base case 
    if ( i < 0 ){
        return -1 ;
    }
    if ( str[i] == x ){
        val = i;
        return val;
    }
    find( str , i-1 , x , val );
}
int main (){
    string str = "abcdddedg";
    int i = str.length()-1;
    char x = 'd';
    int val = -1;
    find( str , i , x , val );
    cout<<"Last occurence of character D is : "<<val<<endl;
    return 0;
}