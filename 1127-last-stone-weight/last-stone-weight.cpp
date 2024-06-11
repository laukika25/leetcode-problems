#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // Use a max-heap to always get the heaviest stones
        priority_queue<int> maxHeap(stones.begin(), stones.end());
        
        while (maxHeap.size() > 1) {
            // Get the two heaviest stones
            int stone1 = maxHeap.top();
            maxHeap.pop();
            int stone2 = maxHeap.top();
            maxHeap.pop();
            
            // If the stones are not equal, push the difference back into the heap
            if (stone1 != stone2) {
                maxHeap.push(stone1 - stone2);
            }
        }
        
        // If there are no stones left, return 0; otherwise, return the last remaining stone
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
