 //Function for finding Area of Circle
 #include<iostream>
 using namespace std ;
 float areacircle ( int r )
 {   float pi = 3.14;
    return pi*r*r;
 }
 int main (){
    float r;
    cout<<"Enter your circle radius : ";
    cin>>r;
    float area = areacircle( r );
    cout<<"Area of circle whose radius "<<r<<" is "<<area;
    return 0;
 }