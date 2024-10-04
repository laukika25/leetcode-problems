class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int i = 0;
        int j = skill.size() - 1;
        long long ans = 0;
        while(i < j){
            long long sum = skill[i] + skill[j];
            long long prod = skill[i] * skill[j];
            ans += prod;
            i++;
            j--;
            long long sum2 = skill[i] +skill[j];
            if(sum != sum2)return -1;

        }
        return ans;
    }
};