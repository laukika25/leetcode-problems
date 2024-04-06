
class Solution {
public:
    bool isPalindrome(string s) {
        string main = "";
        
        
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {  
                main.push_back(tolower(s[i])); 
            }
        }
        
        int i = 0;
        int j = main.size() - 1;
        while(i < j) {
            if(main[i] != main[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true; 
    }
};
