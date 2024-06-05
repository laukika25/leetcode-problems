class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        vector<int> count(n + 1, 0);

        // Count the occurrences of each number
        for (int num : nums) {
            count[num]++;
        }

        // Find the duplicate and the missing number
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                ans[0] = i;  // Duplicate number
            } else if (count[i] == 0) {
                ans[1] = i;  // Missing number
            }
        }

        return ans;
    }
};
