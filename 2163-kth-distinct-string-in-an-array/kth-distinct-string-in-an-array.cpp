class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>mp;
        for(auto i : arr){
            mp[i]++;
        }
        vector<string>v;
        for(auto i : mp){
            if(i.second == 1){
                v.push_back(i.first);
            }
        }
        if(v.size() < k)return "";
        // int i = 0;
        int cnt = 0;
        for(auto i : v){
            cout<<i<<" ";

        }
        cout<<endl;
        for(int j = 0; j<arr.size(); j++){
            for(int i = 0; i<v.size(); i++){
                if(arr[j] == v[i]){
                    cnt++;
                    if(cnt == k){
                        return arr[j];
                    }
                }
            }
        }
        
        return "";
    }
};