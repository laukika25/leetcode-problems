class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
            int digit = x%10;
            if(ans >= INT_MAX || ans <= INT_MIN)return 0;
            ans = ans * 10 + digit;
            x = x/10; 
        }
        if(ans >= INT_MIN && ans<= INT_MAX){
            return ans;
        }
        else{
            return 0;
        }
    }
};