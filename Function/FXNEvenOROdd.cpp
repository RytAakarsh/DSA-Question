 // function for telling your no. is odd or even
 #include<iostream>
 using namespace std;
  string finder ( int n )
  { if ( n%2 == 0 )
    return "Even no.";
    else 
    return "Odd no.";
  }
  int main ( ){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    string num = finder ( n );
 cout<<" Your number "<<n<<" is "<<num;
 return 0;
  }