int fillCups(int* amount, int amountSize) {
    int largest = -1;
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        sum+=amount[i];
        if(largest<amount[i])
            largest = amount[i];
    }
    int halfSum = (sum + 1) / 2;
    return largest > halfSum ? largest : halfSum;
}