class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string final = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] != ' '){
                ans.push_back(s[i]);
            }
            else if(s[i] == ' '){
                reverse(ans.begin(), ans.end());
                final.append(ans);
                final.push_back(s[i]);
                ans.clear();
            }
        }
        reverse(ans.begin(), ans.end());
        final.append(ans);
        return final;
    }
};