class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>s1, s2;
            for(int i = 0; i<s.size(); i++){
                if(!s1.empty() && s[i] == '#'){
                    s1.pop();
                }
                else{
                    if(s[i] == '#'){
                        continue;
                    }
                    s1.push(s[i]);
                
                }
            }
            for(int i = 0; i<t.size(); i++){
                if(!s2.empty() && t[i] == '#'){
                    s2.pop();
                }
                else{
                    if(t[i] == '#'){
                        continue;
                    }
                    s2.push(t[i]);
                }
            }
            if(s1 == s2)return true;
            return false;
            
        
        
    }
};