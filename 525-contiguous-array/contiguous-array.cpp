class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum = 0;
        int longestsubarray = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i] == 0 ? -1 : 1;
            if(sum == 0){
                if(longestsubarray < i+1){
                    longestsubarray = i+1;
                }
            }
            else if(mp.find(sum) != mp.end()){
                if(longestsubarray < i-mp[sum]){
                    longestsubarray = i-mp[sum];
                }
            }
            else{
                mp[sum] = i;
            }
        }
        return longestsubarray;
    }
};