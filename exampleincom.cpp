#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main (){
    vector<string>str{"flower","flow","flight"};
    int i=0;
    int j=0;
    int end = str.size()-1;
    int totalcount = 0;
    string ans;
    for ( auto s : str ){
     totalcount += s.size();
    }
    while ( i<totalcount ){
   if ( str[0][i] && str[1][i] && str[2][i] ){
    ans.push_back(str[0][i]);
   }
   i++;
}
   cout<<ans<<endl;
}