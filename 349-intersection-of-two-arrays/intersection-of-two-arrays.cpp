class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        for(int i = 0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        int n = s1.size();
        int m = s2.size();
        vector<int>ans;
        if(n > m){
            for(auto it : s2){
                if(s1.find(it) != s1.end()){
                    ans.push_back(it);
                }
            }
        }
        else{
            for(auto it : s1){
                if(s2.find(it) != s2.end()){
                    ans.push_back(it);
                }
            }
        }
        return ans;

    }
};