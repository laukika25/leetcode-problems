class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0, r = 0, ans = 1;
        unordered_map<int,int>mp;
        while(r < nums.size()){
            mp[nums[r]]++;
            while(mp[nums[r]] > k){
                mp[nums[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;

    }
};