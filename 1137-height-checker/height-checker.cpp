class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sorted;
        for(int i = 0; i<heights.size(); i++){
            sorted.push_back(heights[i]);
        }
        sort(sorted.begin(), sorted.end());
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(i<heights.size() && j<sorted.size()){
            if(heights[i] != sorted[j]){
                cnt++;
            }
            i++;
            j++;
        }
        return cnt;

    }
};