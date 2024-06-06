class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int i = 0;
        int count = 0;
        for(int j = 0; j<students.size(); j++){
            q.push(students[j]);
        }
        while(count < q.size() && i < sandwiches.size()){
            if(sandwiches[i] == q.front()){
                q.pop();
                i++;
                count = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();


    }
};