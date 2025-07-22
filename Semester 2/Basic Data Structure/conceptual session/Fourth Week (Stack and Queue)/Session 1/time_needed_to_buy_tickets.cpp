//https://leetcode.com/problems/time-needed-to-buy-tickets/description/
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int ticket : tickets)
        {
            q.push(ticket);
        }

        //after pushing the value to the queue now we have the queue as same as the given vector. Now also we need to track the idx in the given vector which is K.
        
        // taking time variable to count the time 
        int time = 0;

        while(1) // firstly we are intializing a infinity  loop and later we will break the loop in suitable condition
        {
            // we will decrease the front value by 1 every time and pop it and later push it on the stack and also increase the time because according to the question, one person is getting ticket in 1 second.
                time++;
                q.front()--;
            if(q.front() != 0)
            {
                q.push(q.front());
                q.pop();

            }
            else
            {
                // in the else part if the q.front() == 0 we have to remove the element from the queue at it got all the ticket it needed
                //here is the condition for breaking the loop
                if (k == 0) // if k == 0 that means the k idx element is on the front of the line and he got all the ticket 
                {
                    break;
                }
                q.pop();
            }

            //now we have to control the idx K
            if(k == 0)
            {
                //when k came to the front index and the k is not 0 still then we will set the k to the last index again
                k = q.size() - 1;
            }
            else
            {
                k--;
            }
        }
        return time;
    }
};