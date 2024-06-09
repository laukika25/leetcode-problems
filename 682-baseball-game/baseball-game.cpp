#include <vector>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st; // Stack to keep track of scores

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                // Remove the last score
                if (!st.empty()) {
                    st.pop();
                }
            } else if (operations[i] == "D") {
                // Double the last score and push it onto the stack
                if (!st.empty()) {
                    st.push(2 * st.top());
                }
            } else if (operations[i] == "+") {
                // Sum of the last two scores
                if (st.size() >= 2) {
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.push(top1); // Push the first top back
                    st.push(top1 + top2);
                }
            } else {
                // Convert string to integer and push it onto the stack
                st.push(stoi(operations[i]));
            }
        }

        // Sum all the scores in the stack
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
