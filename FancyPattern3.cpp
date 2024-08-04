#include<iostream>
using namespace std;
int main( ){
    int n;
    cout<<"Enter your n: ";
    cin>>n;
    //upper
    for ( int row=0 ; row<n ; row++)
    {    int a=0;
        for( int col=0 ; col<2*row+1 ; col++)
        {
            if ( col==0 || col==2*row )
            cout<<"*";
            else if ( col<= row )
            cout<<++a;
            else 
          cout<<--a;
        }
        cout<<endl;
    }
    //lower
    for ( int row=0 ; row<n ; row++)
    {    int b=0;
      for ( int col=0 ; col<2*n-2*row-3 ; col++)
      {
          if ( col==0 || col==2*n-2*row-4 )
            cout<<"*";
            else if ( col<=n-2 )
            cout<<++b;
            else cout<<--b;
      }
      cout<<endl;
    }
}