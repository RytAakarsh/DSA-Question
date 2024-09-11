#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter your n: ";
    cin>>n;
    for( int row=0 ; row<n ; row++)
    {   //star
        for ( int col=0 ; col<2*n-row-2 ; col++)
        {
            cout<<"*";
        }
        //fancy pattern
        for( int col=0 ; col<2*row+1 ; col++)
        {
            if ( col % 2 != 0 )
            cout<<"*";
            else 
            cout<<row+1;
        }
        //star
        for ( int col=0 ; col<2*n-row-2 ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}