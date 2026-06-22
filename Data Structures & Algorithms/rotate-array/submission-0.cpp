class Solution {
public:
 /*REVERSE THE COMPLETE ARRAY FIRST THEN OBSERVE THE FIRST K ELEMENTS OF THE REVERSED ARRAY ARE IN WRONG ORDER
   SO AGAIN REVERSE THE FIRST K ELEMNTS */
   void reverse(vector<int>&nums,int start,int end){
    int temp=0;
    while(start<end){
        temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
         for (int i = 0; i < n; i++){
            cout << nums[i] << " ";
        } 
    }
};