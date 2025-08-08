// problem link: https://leetcode.com/problems/valid-anagram/

// solution :
class Solution {
public:
    bool isAnagram(string s, string t) {
        // approach and analysis:
        // here we are getting a single word or string we have to check if we can make the s word with the t's character
        // 1: we will count the character or s first with map then check if t has the same number of these word or not
        // 2 : if it satisfies my condition then it is true else false;

        int sCharCount = 0;
        map<char, int> mpS;
        for (int i = 0; s[i] != '\0'; i++)
        {
            mpS[s[i]]++;
            sCharCount++;
        }

        int tCharCount = 0;
        map<char, int> mpT;
        for (int i = 0; t[i] != '\0'; i++)
        {
            mpT[t[i]]++;
            tCharCount++;
        }

        if (sCharCount != tCharCount)
            return false;
        
        for (auto it = mpS.begin(); it != mpS.end(); it++)
        {
            char ch = it->first;

            if (mpT[ch] != it->second)
                return false;
        }

        return true;
    }
};


// another more short code easy solution
// take two map and count with the the two string and only check if they are equal or not

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1, m2;
        for (char c : s)
            m1[c]++;
        for (char c : t)
            m2[c]++;

        return m1 == m2;
    }
};