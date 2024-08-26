// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int compress ( vector<char>& s ){
    int index = 0 , count = 1;
    char prev = s[0];
    for ( int i=1 ; i<s.size() ; i++ ){
        if ( prev == s[i] ){
            count++;
        }
        else {
            s[index++] = prev ;
            if ( count > 1 ){
                int start = index;
                while ( count ){
                    s[index++] = (count%10) + '0';
                    count/=10;
                }
                reverse(s.begin()+start , s.begin()+index );
            }
                prev = s[i];
                count = 1;
        }
    }
    s[index++] = prev;
    if ( count > 1 ){
      int start=index;
        while ( count ){
            s[index++] = (count%10)+'0';
            count/=10;
        }
        reverse(s.begin()+start , s.begin()+index );
    }
    return index;
}
int main (){
    vector<char>s{'a','b','b' ,'b' ,'b' ,'b' ,'b' ,'b','b' ,'b' ,'b' ,'b' ,'b' ,'b','b' ,'b' ,'b' ,'b' };
    cout<<"Original size of string : "<<s.size()<<endl;
    int ans = compress( s );
    cout<<"Length of your compress string is : "<<ans<<endl;
    return 0;
}