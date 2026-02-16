#include<bits/stdc++.h>
using namespace std;
int main(){

    // taking the input of text on what we will be looking for the pattern and the pattern.

    string txt;
    string pattern;
    cin >> txt >> pattern;

    int szOfTxt = txt.size();
    int szOfPattern = pattern.size();

    int patternMatched = 0;         // counting how many times the pattern matched.

    vector<int> matchedIdx;         // storing where the pattern matched

    for(int i= 0; i <= szOfTxt - szOfPattern; i++){

        // we are going to look for the pattern when we get the first character occured on the given text
        if(txt[i] == pattern[0]){

            // running an inner loop to check the next characters
            int j = i + 1, k = 1;
            while(k < szOfPattern){ 
                if(txt[j] == pattern[k]){
                    k++, j++;
                }else{
                    break;
                }
            }

            // Now we will see that the K reaches the szOfPattern or not?
            // If reaches thats mean all the character of this substring was same 
            // If not reache then their character was not same that is why the inner loops breaks.

            if(k == szOfPattern ){
                patternMatched++;
                matchedIdx.push_back(i);
            }
        }
    }


    cout << patternMatched << '\n';

    cout << "Printing on what index the pattern mathced : ";
    for(int i = 0; i < matchedIdx.size(); i++){
        cout << matchedIdx[i] << " ";
    }
    return 0;
}