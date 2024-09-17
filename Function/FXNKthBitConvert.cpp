 //function for converting your kth bit 
 #include<iostream>
 using namespace std;
 int converter ( int n , int k )
 {
    int val = 1<<k;
    int ans = n | val ;
    return ans;
 }
 int main ( ){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int k;
    cout<<"Enter your kth bit : ";
    cin>>k;
    int val = converter ( n , k );
    cout<<"output after converting your no. is "<<val;
    return 0;
 }