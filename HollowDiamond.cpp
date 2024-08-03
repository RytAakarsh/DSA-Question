#include<iostream>
using namespace std;
int main (){
    int n; 
    cout<<"Enter your n: ";
    cin>>n;
      //upper
    for( int row=0 ; row<n ; row++)
    {    //space
        for ( int col=0 ; col<n-row-1 ; col++)
        {
            cout<<" ";
        }
        //star+space
        for( int col=0 ; col<2*row+1 ; col++)
        {
            if ( col==0 || col==2*row )
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    //below
    for( int row=0 ; row<n ; row++)
    {
        //space
        for( int col=0 ; col<row ; col++)
        {
            cout<<" ";
        }
        //star+space
        for ( int col=0 ; col<2*n-2*row-1 ; col++)
        {
            if ( col==0 || col==2*n-2*row-2 )
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}