class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size()/4 + 1;
        int count = 1;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i-1] == arr[i]){
                count++;
            }
            else{
                count = 1;
            }
            if(count >= n){
                return arr[i];
            }

        }
        return arr[0];
    }
};