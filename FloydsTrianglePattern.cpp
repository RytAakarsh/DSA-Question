#include<iostream>
using namespace std;
int main ()
 {
    int n;
    cout<<"Enter your n: ";
    cin>>n;
    int a=1;
    for ( int row=0 ; row<n ; row++)
    {
        for( int col=0 ; col<row+1 ; col++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
} 