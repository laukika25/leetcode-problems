class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
        vector<int>temp;
        temp.push_back(ans);
        for(int col = 0; col < rowIndex; col++){
            ans = ans * (rowIndex - col);
            ans = ans/(col + 1);
            temp.push_back(ans);
        }
        return temp;
        
    }
};