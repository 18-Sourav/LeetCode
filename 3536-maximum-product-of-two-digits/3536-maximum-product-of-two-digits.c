int maxProduct(int n) {

    char max1 = 0;
    char max2 = 0;
        while(n)
        {
            int rem = n % 10;
            if(rem >= max1)
            {
                max2 = max1;
                max1 = rem;
            }
            else if(rem > max2){
                max2 = rem;
            }
            n /= 10;
        }
        return max1 * max2;
    
}