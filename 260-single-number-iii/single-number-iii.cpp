class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int num : nums){
            mp[num]++;
        }
        for(auto i : mp){
            if(i.second == 1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};