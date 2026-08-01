int dp[501][501];

int get_max_score(int i, int j, int *piles)
{
    if(i == j)
        return piles[i];

     if(dp[i][j] != INT_MIN)
        return dp[i][j];    

    int i_select = piles[i] - get_max_score(i+1,j,piles);
    int j_select = piles[j] - get_max_score(i,j-1,piles);

    dp[i][j]= i_select >j_select? i_select : j_select;   

    return dp[i][j];

}
bool stoneGame(int* piles, int pilesSize) {
    return get_max_score(0,pilesSize-1,piles)>=0;     
}