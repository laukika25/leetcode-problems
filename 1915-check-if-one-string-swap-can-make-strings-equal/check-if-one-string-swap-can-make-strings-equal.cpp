class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)return true;
        int l = 0;
        int r = s1.size() - 1;
        while(s1[l] == s2[l])l++;
        while(s1[r] == s2[r])r--;
        swap(s1[l], s1[r]);
        return s1 == s2;
    }
};