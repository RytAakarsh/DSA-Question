// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
//  typically using all the original letters exactly once.

//  Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true

public :
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for ( int i=0 ; i<s.size() ; i++ ){
         if ( s[i] != t[i] ){
            return false;
         }
        }
         if ( t.size() != s.size() ){
            return false;
         }
         return true;
    }