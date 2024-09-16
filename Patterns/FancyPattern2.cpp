#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter your n : ";
    cin>>n;
    //upper part
    int a=1;
    for ( int row=0 ; row<n ; row++)
    {
        for( int col=0 ; col<2*row+1 ; col++)
        {
            if ( col %2 == 0 )
            cout<<a;
            
            if ( col %2 == 0 )
            a++;

            else
            cout<<"*"; 
    }
    cout<<endl;
    }
     //lower part code 
    
      int s = a - n;
     for ( int row=0 ; row<n ; row++)
     { int  k = s;
        for( int col=0 ; col<2*n-2*row-1 ; col++)
        {    
            if ( col %2 == 0 )
            cout<<k;
            
            if ( col %2 == 0 )
            k++;            

            else
            cout<<"*";     
        }
         s = s-n +row + 1;
        cout<<endl;
     }
   
}