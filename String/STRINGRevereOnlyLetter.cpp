// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.
// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"


#include <iostream>
#include <string>
#include <algorithm> 
#include<cctype>

using namespace std;

int main() {
    string s = "Test1ng-Leet=code-Q!";
    int i=0;
    int e=s.size()-1;
    cout<<s<<endl;
    while ( i<=e ){
        if ( isalpha(s[i]) && isalpha(s[e]) ) {
         swap(s[i],s[e]);
         i++;
         e--;
        }
        else if ( !isalpha(s[i])){
            i++;
        }
        else {
            e--;
        }
    }
    cout<<s<<endl;
}