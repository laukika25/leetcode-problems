class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string str = s1 + " " + s2;

        map<string, int> mp;
        vector<string> ans;
        
        stringstream ss(str); 
        string word;
        
        while (ss >> word) {
            mp[word]++;
        }
        
        for (auto i : mp) {
            if (i.second == 1) {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
