#include<iostream>
#include<string>
using namespace std;
int firstocc(string s, string target) {
    int i = 0; // for string s
    int j = 0; // for string target
    while (i <= (s.size()-1) - (target.size()-1)) {
        while  (j < target.size() && s[i + j] == target[j]) {
            j++;
        }
        if (j == target.size()) {
            return i;
        }
        i++;
        j = 0;
    }
    return -1;
}

int main (){
    string s = "letsmakeyousad";
    string target = "sad";
    int ans = firstocc( s , target );
    cout<<"First occurence of your target in main string is : "<<ans<<endl;
    return 0;
}