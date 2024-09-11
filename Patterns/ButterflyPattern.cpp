#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter your n : ";
    cin>>n;
    //upper
    for( int row=0 ; row<n ; row++)
    {
        //star
        for( int col=0 ; col<row+1 ; col++)
        {
            cout<<"*";
        }
        //space
        for ( int col=0 ; col<2*n-2*row-1 ; col++)
        {
            cout<<" ";
        }
        //star
        for( int col=0 ; col<row+1 ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //down
    for( int row=0 ; row<n ; row++)
    {
        //star
        for ( int col=0 ; col<n-row ; col++)
        {
            cout<<"*";
        }
        //space
        for ( int col=0 ; col<2*row+1 ; col++)
        {
            cout<<" ";
        }
        //star
        for( int col=0 ; col<n-row ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}