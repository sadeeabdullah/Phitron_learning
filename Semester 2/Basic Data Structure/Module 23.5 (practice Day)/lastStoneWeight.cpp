// problem link: https://leetcode.com/problems/last-stone-weight/description/

// solution :

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // we will take a priortiye queue to store the value 
        priority_queue<int> pq;
        for (int x : stones)
        {
            pq.push(x);
        }

        // after getting the priority queue we know well that we will it sorted
        // so what we will do is pop the top 2 and store it one place then do some operation base on the given condition and push them again.

        // now the question is when we will stop the procedure

        while (pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();

            if (x != y)
            {
                int diff = y - x;
                pq.push(diff);
            }
            else if (x == y)
            {
                pq.push(0);
            }
        }

        return pq.top();
    }
};