 //function for sum of even no. till N
 #include<iostream>
 using namespace std ;
 int evensum ( int n )
 {
    int sum =0 ;
    for ( int i=2 ; i<=n ; i=i+2 )
    sum = sum+i;
    return sum;
 }
 int main (){
    int n;
    cout<<"Enter your N : ";
    cin>>n;
    int sum = evensum( n );
    cout<<"sum of all even till "<<n<<" is "<<sum;
    return 0;
 }