class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums;
        for(int i = m+n-1; i>=m; i--){
            if(nums1[i] == 0){
                nums1.pop_back();
                cout<<"0---"<<endl;
            }
            else{
                cout<<"else---"<<endl;
                break;
            }
        }
        for(int i = 0; i<nums1.size(); i++){
            nums.push_back(nums1[i]);
        }
        nums1.clear();
        int i = 0;
        int j = 0;
        while(i<nums.size() && j<n){
            if(nums[i] <= nums2[j]){
                nums1.push_back(nums[i]);
                i++;
            }
            else{
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums.size()){
            nums1.push_back(nums[i]);
            i++;
        }
        while(j < nums2.size()){
            nums1.push_back(nums2[j]);
            j++;
        }


    }
};