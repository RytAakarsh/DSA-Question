//sort 0,1,2 in array 
//i/p : arr[] = {2,1,2,0,0}
//o/p : arr[] = {0,0,1,2,2}
//function :-
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int start=0;
    int mid=0;
    int end=nums.size()-1;
    while ( mid<=end ){
     if ( nums[mid] == 0 ){
        swap(nums[mid],nums[start]);
        mid++;
        start++;
     }
     else if ( nums[mid]==2){
        swap(nums[mid],nums[end]);
        end--;
     }
     else {
       mid++;
     }
    }
    }
};