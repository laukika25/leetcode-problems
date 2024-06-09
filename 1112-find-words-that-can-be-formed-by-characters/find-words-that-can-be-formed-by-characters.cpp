class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<int,int> m;
        for(auto x : chars) m[x]++;

        int ans = 0;
        for(auto x : words)
        {
            unordered_map<int,int> n;
            for(auto y : x) n[y]++;

            bool flag = false;
            for(auto y : x)
            {
                if(m.find(y) == m.end() or n.find(y) == n.end() or m[y] < n[y])
                {
                    flag = true;
                    break;
                }
            }
            if(flag == false) ans += x.length();
        }
        return ans;
    }
};