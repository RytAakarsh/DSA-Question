#include<iostream>
using namespace std;

   //for correct printing
void print ( int n ){
    //base case 
    if ( n==0 ){
        return ;
    }
    print ( n-1 );
    cout<<n<<" ";
}
int main (){
    int n;
    cout<<"Enter your Last No. : ";
    cin>>n;
    print( n );
    return 0;
}

   //for reverse counting 


// void print ( int n ){
//     if ( n==0 ){
//         return ;
//     }
//     cout<<n<<" ";
//     print ( n-1 );
// }