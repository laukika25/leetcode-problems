class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt  = 0;
        int maxcnt = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] == 1){
                cnt++;
            }
            else if(nums[j] == 0){
                maxcnt = max(maxcnt, cnt);
                cnt = 0;
            }
        }
        maxcnt = max(cnt, maxcnt);
        return maxcnt;
    }
};