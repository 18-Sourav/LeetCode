bool checkDivisibility(int n) {
    int dig_prod = 1;
    int dig_sum = 0;
    int num = n;
    while(n)
    {
        int dig = n%10;
        dig_sum += dig;
        dig_prod *= dig;
        n/=10;
    }
    dig_sum+=dig_prod;
    if(num%dig_sum==0)
        return true;
    return false;    
}