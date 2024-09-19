// checking string is palindromic or not 
#include<iostream>
#include<string>
using namespace std;
void check ( string& str , int s , int e ){
    //base case 
    if ( s>e ){
        cout<<"Your given string is palindromic";
        return;
    }
    if ( str[s] != str[e] ){
        cout<<"String is not palindromic ";
    }
    check ( str , s+1 , e-1 );
}
int main (){
    string str = "racecar";
    int s=0;
    int e=str.size()-1;
    check( str , s , e );
    return 0;
}