class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i = 0; i<s.size(); i++){
            if(!st.empty() &&  s[i] == st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string a;
        int i = 0;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
            i++;
        }
        reverse(a.begin(), a.end());
        return a;


    }
};