//https://leetcode.com/problems/crawler-log-folder/

class Solution {
public:
    int minOperations(vector<string>& logs) {
        long long d = 1; // we are just counting it to 1 operation in the first because we know that we cannot move back from the main folder if we get ../ log so we are setting it to 1
        for(string log : logs)
        {
            if(log == "./") continue; // we will not do anything if we get this ./ log
            else if (log == "../") // we will go to the parent folder with this sign but not when we get to the main folder we will not  be able to get more ancest.
            {
                if(d != 1) d--;
            }
            else 
                d++; // else will add another children and how many children count is mostly we need
        }
        return d - 1; // we are returning with -1 because the main folder is not counted
    }
};