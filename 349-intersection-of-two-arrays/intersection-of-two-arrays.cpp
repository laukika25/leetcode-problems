#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Insert all elements of nums1 into an unordered set
        unordered_set<int> s1;
        unordered_set<int> resultSet;

        for(int i = 0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }

        // Step 2: Iterate through nums2 and check if each element is in s1
        for (int num : nums2) {
            if (s1.find(num) != s1.end()) {
                resultSet.insert(num); // Step 3: Add to resultSet if it is in s1
            }
        }

        // Step 4: Convert the resultSet to a vector for the output
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
