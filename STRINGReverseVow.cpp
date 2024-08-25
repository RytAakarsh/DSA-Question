#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isvowel ( char ch ){
    ch = toupper(ch);
    return ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' || ch == 'U'; 
}
string reversevowel( string s ){
    int i=0;
    int j=s.size()-1;
    while ( i<=j ){
        if ( isvowel(s[i]) && isvowel(s[j]) ){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if ( !isvowel(s[i]) ){
            i++;
        }
        else {
            j--;
        }
    }
         return s;
}  
int main (){
   string s = "hello";
   string ans = reversevowel( s );
   cout<<ans<<endl;
   return 0;
    }