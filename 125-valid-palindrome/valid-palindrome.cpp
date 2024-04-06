
class Solution {
public:
    bool isPalindrome(string s) {
        string main = "";
        
        // Transform the input string to lowercase and filter out non-alphanumeric characters
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {  // Check if the character is alphanumeric
                main.push_back(tolower(s[i])); // Convert character to lowercase and add it to the main string
            }
        }
        
        // Check for palindrome property
        int i = 0;
        int j = main.size() - 1;
        while(i < j) {
            if(main[i] != main[j]) {
                return false; // Not a palindrome
            }
            i++;
            j--;
        }
        return true; // Palindrome
    }
};
