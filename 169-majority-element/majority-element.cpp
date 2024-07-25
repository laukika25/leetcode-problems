class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 1;
        for(int i = 0; i<nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                cnt++;
                if(cnt > (nums.size()/2)){
                    return nums[i];
                }
            }
        }
        return nums[0];

    }
};