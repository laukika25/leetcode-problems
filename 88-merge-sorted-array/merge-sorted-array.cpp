class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Start from the end of nums1 (filled elements)
    int j = n - 1; // Start from the end of nums2
    int k = m + n - 1; // Index for the merged array (end of nums1)

    // Loop backwards to fill the merged array from the end
    while (i >= 0 && j >= 0) {
      if (nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }

    // Copy remaining elements from nums2 (if any)
    while (j >= 0) {
      nums1[k--] = nums2[j--];
    }
  }
};
