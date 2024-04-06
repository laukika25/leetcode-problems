class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int maxlen = INT_MIN;
        int len = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1)len++;
                else{
                    maxlen = max(maxlen, len);
                    len = 1;
                }
            }
            
        }
        return max(maxlen, len);
        
    }
};