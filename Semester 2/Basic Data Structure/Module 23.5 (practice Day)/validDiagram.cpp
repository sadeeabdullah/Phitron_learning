// problem link :https://leetcode.com/problems/valid-anagram/


// solution link: 
class Solution {
public:
    bool isAnagram(string s, string t) {
        // what does map does? map count the character repeating in the string and store the count

        map<char, int> mp1, mp2;

        // traversing the string s
        for (char ch : s)
            // inserting the values into the map
            mp1[ch]++;
        // traversing the string t
        for (char ch : t)
            // inserting the values into the map
            mp2[ch]++;
        
        // if mp1 and mp2 is equal then we will return true else false
        return mp1 == mp2;
    }
};