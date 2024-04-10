class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int>result(n);
        bool skip = false;
        int id = 0;
        int ir = 0;
        sort(deck.begin(), deck.end());
        while(id < n){
            if(result[ir] == 0){
                if(!skip){
                    result[ir] = deck[id];
                    id++;
                }
                skip = !skip;
            }
            ir = (ir + 1)%n;
        }
        return result;
    }
};