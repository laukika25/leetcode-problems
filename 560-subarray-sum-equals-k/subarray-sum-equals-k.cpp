class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int psum = 0;
        int cnt = 0;
        mp[0] = 1;
        for(int i = 0; i<nums.size(); i++){
            psum += nums[i];
            int remove = psum - k;
            cnt += mp[remove];
            mp[psum] += 1;
        }
        return cnt;
    }
};