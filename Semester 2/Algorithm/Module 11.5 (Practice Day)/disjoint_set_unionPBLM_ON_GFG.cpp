// problem link: https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// solution:
/*Complete the functions below*/

int find(int par[], int x) {
    // add code here
    // using recursion
    if (par[x] == x)
        return x;
    int leader = find(par, par[x]);
    par[x] = leader;
    return leader;
}

void unionSet(int par[], int x, int z) {
    
    int leaderX = find(par, x);
    int leaderZ = find(par, z);
    par[leaderX] = leaderZ;
    
}