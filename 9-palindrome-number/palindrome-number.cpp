class Solution {
public:
    bool isPalindrome(long int x) {
        if(x < 0)return false;
        long int reversed = 0;
        long int temp = x;
        long int rem = 0;
        while(temp != 0){
            rem =  temp%10;
            reversed = reversed * 10 + rem;
            temp = temp/10;
        }
        if(reversed == x){
            return true;
        }
        return false;
    }
};