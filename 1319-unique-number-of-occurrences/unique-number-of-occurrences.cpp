class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>mp, mp2;
        for(int i : arr){
            mp[i]++;
        }
        for(auto i : mp){
            mp2[i.second]++;
            if(mp2[i.second] > 1){
                return false;
            }
        }
        return true;
    }
};