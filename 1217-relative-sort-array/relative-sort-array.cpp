class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        vector<bool> visited(arr1.size(), false);
        vector<int>ans;
        for(int i = 0; i<arr2.size(); i++){
            for(int j =0; j< arr1.size(); j++){
                if(arr1[j] == arr2[i]){
                    ans.push_back(arr1[j]);
                    visited[j] = true;
                }
            }
        }
        for(int i = 0; i<arr1.size(); i++){
            if(!visited[i]){
                ans.push_back(arr1[i]);
            }
        }

        return ans;
    }
};