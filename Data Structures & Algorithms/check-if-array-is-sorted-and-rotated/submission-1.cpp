class Solution {
public:
    bool check(vector<int>& nums) {
        // If this were a sorted array there must exist only 1 such pair where nums[i]>nums[i+1]. 
        // Any more no. of such pair means that the array is sorted. 
        //we use modulo to ensure that the last element is checked with the 1st element.
        int count =0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%n]){
                count ++;
            }
        }
    return count <=1;
    }
};