class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>boxes(9);

        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                char num = board[i][j];
                if(num == '.')continue;
                int boxindex = (i/3)*3 + (j/3);

                if(rows[i].count(num) || cols[j].count(num) || boxes[boxindex].count(num)){
                    return false;
                }

                rows[i].insert(num);
                cols[j].insert(num);
                boxes[boxindex].insert(num);
            }
        }
        return true;

    }
};
