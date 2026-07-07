long long sumAndMultiply(int n) {
    int sum = 0;
    int num = 0,i=1;

    while(n)
    {
        int digit = n%10;
        if(digit)
        {
            num = num + digit*i;
            sum+=digit;
            i*=10;
        }
       
        n/=10;
    }
    return (long long)num*sum;
}