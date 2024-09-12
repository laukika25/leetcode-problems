class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0};
        int cnt = 0;
        int fcnt = 0;
        for(int i = 0; i<allowed.size(); i++){
            int a = allowed[i] - 'a';
            arr[a] = 1;
        }
        for(int i = 0; i<words.size(); i++){
            for(int j = 0; j<words[i].size(); j++){
                int a = words[i][j] - 'a';
                if(arr[a]){
                    cnt++;
                }
            }
            if(cnt == words[i].size()){
                fcnt++;
            }
            cnt = 0;
        }
        return fcnt;
    }
};