    //function for marks & grade problem
#include<iostream>
using namespace std;
 char grade ( int marks )
{
    if ( marks >= 90)
    return 'A';
    else if ( marks >= 80 )
    return 'B';
    else if ( marks >= 70 )
    return 'C';
    else if ( marks >= 60 )
    return 'D';
    else if ( marks >= 40 )
    return 'E';
    else return 'F';
}
int main (){
    int marks;
    cout<<"Enter your marks out of 100 : ";
    cin>>marks;
    char Grade =   grade ( marks );
    cout<<"Your Grade according to your "<<marks<<" is "<<Grade;
    return 0;
}