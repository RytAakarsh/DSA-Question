// Reversing a string by using recursion 
#include<iostream>
#include <string>
using namespace std;
void reverse ( string& str , int s , int e ){
    //base case 
    if ( s>e ){
        return ;
    }
    swap( str[s],str[e]);
    reverse(str , s+1 , e-1 );
}
int main (){
    string str = "aakarsh";
    int s=0;
    int e=str.size()-1;
    reverse( str , s , e );
    cout<<"Your reverse string is : "<<str<<endl;
    return 0;
}
