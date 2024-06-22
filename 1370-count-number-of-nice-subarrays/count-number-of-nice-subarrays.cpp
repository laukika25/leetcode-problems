class Solution {
public:
int cntsubarr(vector<int>&nums, int k){
    int l = 0, r= 0, oddc = 0,cnt = 0;
        int n = nums.size();
        while(r < n){
            if(nums[r] % 2 != 0){
                oddc++;
                
            }
            while(oddc > k){
                if(nums[l] % 2 != 0){
                    oddc--;
                }
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = cntsubarr(nums, k) - cntsubarr(nums, k-1);
        return ans;
    }
};