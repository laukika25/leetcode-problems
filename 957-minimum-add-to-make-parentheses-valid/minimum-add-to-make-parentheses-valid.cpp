class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                
            }
            else{
                if(!st.empty()){
                    if(s[i] == ')' && st.top() == '('){
                        st.pop();
                        
                    }
                    else{
                        st.push(s[i]);
                    }
                }

                else{
                    st.push(s[i]);
                    
                }
                
            }

        }
        // int cnt = 0;
        while(!st.empty()){
            st.pop();
            cnt++;
        }
        return cnt;

    }
};