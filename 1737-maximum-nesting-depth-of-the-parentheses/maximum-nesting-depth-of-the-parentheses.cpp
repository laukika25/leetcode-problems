class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int final = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                cnt++;
                if(final < cnt){
                    final = cnt;
                }
            }
            else if(s[i] == ')'){
                cnt--;
            }
        }
        return final;
    }
};