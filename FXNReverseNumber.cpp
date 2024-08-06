 //function for reversing a number
 #include<iostream>
 using namespace std;
 int reverse ( int n )
 {
    int ans=0 , rem ;
    bool numis = false;
    if ( n < 0 )
    { numis = true ;
       n = -n;
    }
    while ( n > 0 ) {
    rem = n%10;
    n = n/10;
    ans = ans*10 + rem; 
    }
      return numis ? -ans : ans;
 }
 int main () {
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int rev = reverse ( n );
    cout<<"Reverse number of your no. "<<n<<" is "<<rev;
    return 0;
 }