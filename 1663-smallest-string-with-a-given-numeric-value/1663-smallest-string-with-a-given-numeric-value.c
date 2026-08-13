char* getSmallestString(int n, int k) {
    int balance = k-n;
    char *res = (char*)malloc(sizeof(char)*n+1);
    for(int i=0;i<n;i++)
        res[i] = 'a';
    int len = n;    
    while(n--)
    {
        if(balance>=25)
        {
            res[n] = 'a'+25;
            balance-=25;
        }
        else
        {
            res[n] = res[n]+balance;
            break;
        }
    }
    res[len] ='\0';
    return res;
}