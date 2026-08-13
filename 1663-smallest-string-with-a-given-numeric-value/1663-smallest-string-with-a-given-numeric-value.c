char* getSmallestString(int n, int k) {
    int balance = k-n;
    char *res = (char*)malloc(sizeof(char)*n+1);
   
    int len = n;    
    while(n--)
    {
        if(balance>=25)
        {
            res[n] = 'a'+25;
            balance-=25;
        }
        else if(balance>0)
        {
            res[n] = 'a' +balance;
            balance = 0;
        }
        else
            res[n] = 'a';
    }
    res[len] ='\0';
    return res;
}