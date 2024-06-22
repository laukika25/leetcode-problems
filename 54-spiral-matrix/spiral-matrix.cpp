class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.empty())return ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startrow = 0, startcol = 0;
        int endrow = row - 1, endcol = col - 1;

        int total = row * col;
        int count = 0;

        while(count < total){
            // print start row
            for(int i = startcol; i<=endcol && count < total; i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            // print end column
            for(int i = startrow; i<=endrow && count < total; i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            // print end row
            for(int i = endcol; i>=startcol && count < total; i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            // print start column
            for(int i = endrow; i>=startrow && count < total; i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;

    }
};