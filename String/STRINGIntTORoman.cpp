#include<iostream>
#include<string>
using namespace std;
string intToroman ( int n ){
    string ans = "";
    string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    for ( int i=0 ; i<13 ; i++ ){
        while ( n >= value[i] ){
            ans += roman[i];
            n -= value[i];
        }
    }
    return ans;
}
int main (){
    cout<<"Enter your integer : ";
    int n;
    cin>>n;
    string ans = intToroman( n );
    cout<<ans<<endl;
    return 0;
}