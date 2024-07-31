class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = "";
        int i = 0;
        for(auto it : strs[0]){
            for(auto it2 : strs){
                if(it2[i]!=it){
                    return temp;
                }
            }
            temp += it;
            ++i;
        }
        return temp;
        



    }
};