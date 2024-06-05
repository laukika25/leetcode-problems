class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>>visited;
        pair<int, int>point(0,0);
        visited.insert(point);
        for(int k = 0; k<path.size(); k++){
            if(path[k] == 'N'){
                point.second += 1;
            }
            else if(path[k] == 'S'){
                point.second -= 1;
            }
            else if(path[k] == 'E'){
                point.first += 1;
            }
            else{
                point.first -= 1;
            }
            if(visited.find(point) != visited.end()){
                return true;
            }
            visited.insert(point);
            
        }
        return false;
    }
};