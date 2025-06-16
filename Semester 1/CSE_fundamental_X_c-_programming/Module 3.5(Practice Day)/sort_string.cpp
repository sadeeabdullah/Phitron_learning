#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;
    // cin >> str;

    //getting the strlen is here string_name.length()


    //METHOD 1: USING FREQUENCY ARRAY

    // int freq[26] = {0};

    // for (int i = 0; i <  str.length(); i++)
    // {
    //     freq[str[i] - 'a']++;
    // }
    // for (int i = 0; i <  26; i++)
    // {

    //     if(freq[i] != 0)
    //     {
    //        //cout << (char) (i + 'a') << "-->" << freq[i] << endl; // follwing this method we are not getting the value two times which is two times in the string
    //         // we are using a for loop to print the value if it is more than once
    //         for(int j = 0; j < freq[i]; j++)
    //         {
    //             cout << (char) (i + 'a') << endl;
    //         }
    //     }
    // }


    //METHOD 2: USING SORT FUNCTION;

    // sort(str.begin(), str.end()),
    
    // cout << str;

    //METHOD 3: IF WE HAVE SPACES IN THE STRING

    getline(cin, str);

    sort(str.begin(), str.end());

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            cout << str[i];
        }
        
    }
    
    
    
    return 0;
}