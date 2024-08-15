// Find the odd occuring element in an array 

// →all the element occur even no. of times, except one 
// →all repeating occurence of element appear in pairs
// & Pairs are not adjacent (there cannot be more than 2 concecutive occurence of any element)
// → Find the element that appears odd no of times.
// arr[] = {1,1,2,2,3,3,4,4,3,600,600,4,4};
#include<iostream>
#include<vector>
using namespace std;
int search ( vector<int>arr ){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while ( s<=e ){
        if ( s==e ){
            return s;
            break;
        }
        //mid = even 
        if ( mid %2 == 0 ){
            if ( arr[mid] == arr[mid+1] ){
                //means you are in left -> search in right 
                s = mid + 2;
            }
            else {
                //you are right -> 
                // search in left 
                e = mid;
            }
        }
            else {
                // mid = odd 
                if ( arr [mid] == arr[mid-1] ){ 
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
            mid = s+(e-s)/2;
        }
        return ans ;
    }
    int main ( ){
        vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
        int ans = search( arr );
        cout<<"Odd occuring element in your array is at "<<ans<<"th index"<<endl;
        cout<<"And element is "<<arr[ans]<<endl;
        return 0;
    }