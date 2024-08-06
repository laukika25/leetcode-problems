class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int>mp;
        for(auto i : word){
            mp[i]++;
        }
        int cnt = mp.size();
        long long ans = 0;
        if(cnt <= 8){
            for(auto i : mp){
                ans += i.second;
            }

        }
        else{
            vector<int>freq(26, 0);
            for(auto i : mp){
                freq.push_back(i.second);
            }
            sort(freq.rbegin(), freq.rend());
            for(int i = 0; i<8; i++){
                ans += freq[i];
            }
            for(int i = 8; i<16; i++){
                ans += freq[i] * 2;
            }
            for(int i = 16; i<24; i++){
                ans += freq[i] * 3;
            }
            for(int i = 24; i<26; i++){
                ans += freq[i] * 4;
            }
        }
        return ans;


    }
};