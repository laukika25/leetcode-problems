class Solution {
public:
    string clearDigits(string s) {
        stack<int>st;
        for(int i = 0; i<s.size(); i++){
            if(!st.empty() && (s[i] == '0' || s[i] == '9'|| s[i] == '1'|| s[i] == '2'||s[i] == '3'||s[i] == '4'||s[i] == '5'
            || s[i] == '6'|| s[i] == '7'||s[i] == '8')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};