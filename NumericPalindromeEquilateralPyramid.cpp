#include<iostream>
using namespace std;
int main ( ){
    int n; 
    cout<<"Enter your n: ";
    cin>>n;
    for( int row=0 ; row<n ; row++)
    {
          //space
            for( int col=0 ; col<n-row ; col++)
            {
               cout<<"  ";
            }
            //number
            for( int col=0 ; col<row+1 ; col++)
            {
                cout<<col+1<<" ";
            }
            //reversing
            for ( int col=row ; col>=1 ; col--)
            {
                cout<<col<<" ";
            }
            cout<<endl;
    }
}