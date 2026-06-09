class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1;
        int ans2=-1;
        //first position occurance
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                ans1=mid;
                high=mid-1;
            }
        }
        //last position occurance
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                ans2=mid;
                low=mid+1;
            }
        }
    return {ans1,ans2}   ;
    }
};