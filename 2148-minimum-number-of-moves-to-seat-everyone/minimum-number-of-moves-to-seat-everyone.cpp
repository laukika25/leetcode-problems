class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans = 0;
        int i = 0;
        int j = 0;
        while(i < seats.size() && j < students.size()){
            ans += abs(seats[i] - students[j]);
            i++;
            j++;
        }
        return ans;
    }
};