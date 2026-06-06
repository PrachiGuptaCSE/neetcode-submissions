class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int i=0;i,i<nums.size();i++){
            f[nums[i]]++;
        }
        int max_len=0;
        for(auto i:f){
            if(f.find(i.first-1)==f.end()){
                int start=i.first;
                int count=1;
                while(f.find(start+1)!=f.end()){
                    start++;
                    count++;
                }
                max_len=max(max_len,count);
            }
        }
    return max_len;    
        
    }
};
