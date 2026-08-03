int my_max(int a,int b)
{
    return a>b? a:b;
}
int dp[50001];
int solve(int i,int* stoneValue, int stoneValueSize)
{
    int n = stoneValueSize;
    if(i >= n )
        return 0;

    if(dp[i] != INT_MIN)
        return dp[i];    

    int best = INT_MIN;
    int sum = 0;

    for(int k=0; k<3 && i+k<n; k++)
    {
        sum += stoneValue[i+k];
        best = my_max(best, sum - solve(i+k+1,stoneValue,stoneValueSize));
    }
    dp[i] = best;
    return dp[i];  
}

char* stoneGameIII(int* stoneValue, int stoneValueSize) {
    int diff = 0;
    for(int i = 0; i <= stoneValueSize; i++)
        dp[i] = INT_MIN;

    char *winner[3] = {"Alice","Bob","Tie"};
    diff = solve(0,stoneValue,stoneValueSize);

    if(diff == 0)
        return winner[2];
    else if(diff>0)
        return winner[0];
    else
        return winner[1];        
}