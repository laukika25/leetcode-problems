class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastseen[3] = {-1, -1, -1}; // To store the last seen positions of 'a', 'b', and 'c'
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            lastseen[s[i] - 'a'] = i; // Update the last seen position of the current character
            // If all characters 'a', 'b', and 'c' have been seen at least once
            if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
                // Count substrings ending at position i
                cnt += 1 + min({lastseen[0], lastseen[1], lastseen[2]});
            }
        }
        return cnt;
    }
};
