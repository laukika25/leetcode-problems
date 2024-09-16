class Solution {
public:

    int timeToInt(string str){
        int hour = 0;
        int i = 0;
        while(str[i] != ':'){
            int digit = str[i] -'0';
            hour = hour * 10 + digit;
            i++;
        }

        int min = 0;
        i = 3;
        while(i < str.size()){
            int digit = str[i] -'0';
            min = min * 10 + digit;
            i++;
        }

        return (hour * 60 + min);

    }
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> nums(n);

        for(int i = 0 ; i < n ; i++){
            nums[i] = timeToInt(timePoints[i]);
        }

        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < n ; i++){
            cout<<nums[i]<<" ";
        }

        int mini = INT_MAX;

        for(int i = 0 ; i < n - 1 ; i++){
            int diff = nums[i + 1] - nums[i];
            if(diff < mini){
                mini = diff;
            }
        }

        int a = 1440 - nums[n - 1];

        if(mini > (a + nums[0])){
            mini = a +  nums[0];
        }

        

        return mini;
    }
};