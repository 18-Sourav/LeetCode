int fillCups(int* amount, int amountSize) {
    int lar = -1;
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        sum+=amount[i];
        if(lar<amount[i])
            lar = amount[i];
    }
    int h_Sum = (sum + 1) / 2;
    return lar > h_Sum ? lar : h_Sum;
}