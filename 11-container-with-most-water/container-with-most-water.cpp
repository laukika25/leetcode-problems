class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max_area = 0;
        while(i<j){
            int  l = j - i;
            int h = 0;

            if(height[j] > height[i]){
                h = height[i];
                i++;
            }
            else{
                h = height[j];
                j--;
            }
            int area = l * h;
            max_area = max(max_area, area);
        }
        return max_area;
        
    }
};