class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        int j = i+1;
        while(j < s.size()){
            if(s[i] == s[j] + 32 || s[i] == s[j] - 32){
                s.erase(i, 2);
                i = 0;
                j = i+1;
            }
            else{
                i++;
                j++;
            }
        }
        return s;
    }
};