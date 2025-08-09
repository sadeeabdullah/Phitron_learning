// problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // taking heap priority to get as per highest value to lowest
        priority_queue<int> pq;

        // traversting through the vector and inserting the values to the priority queue
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }

        // after getting the perfect priority queue we need to get the kth element what can we do is run a loop untill the  kth element and return the kth element at the end
        int i = 0;
        while (i < k - 1)
        {
            
            pq.pop();
            i ++;
        }
        return pq.top();
    }
};


// we can solve the problem with antoher short approach

// approach : take a min heap prioritye queue and pop the number as well untill we get to the number k, when we reach the number we will stop popping and at the end we will return the top of the priority queue.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // taking heap priority to get as per highest value to lowest
        priority_queue<int, vector<int>, greater<int>> pq;

        // range base for loop
        for (int x : nums)
        {
            pq.push(x);

            // we will push as long as the priority queue size is greater than k
            if (pq.size() > k) // we will stop popping when the size is k
            {
                pq.pop();
            }
        }

        
        return pq.top();
    }
};
