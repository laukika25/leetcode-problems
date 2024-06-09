class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int maxi = INT_MIN;
        for(auto i : mp){
            maxi = max(maxi, i.second);
        }
        int sum = 0;
        for(auto i : mp){
            if(i.second == maxi){
                sum += i.second;
            }
        }
        return sum;
    }
};