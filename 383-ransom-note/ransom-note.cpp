class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m,mp;
        bool flag=false;
        for(auto i : magazine)
        {
            m[i]++;
        }
        for(auto i : ransomNote)
        {
            mp[i]++;
        }
        for(auto i : ransomNote)
        {
            if(mp[i]>m[i])
            {
                flag=true;
                break;
            }
        }
        if(flag)  {
            return false;
        }
         return true;   
    }
};  