int getSum(int a, int b) {
    char arr[32]={0};
    int carry = 0;
    int result = 0;

    for(int i=0;i<32;i++)
    {
        unsigned int mask = 1U<<i;
        int bit1 = a&mask;
        int bit2 = b&mask;

        if(bit1 && bit2)
        {
            arr[i] = carry;
            carry = 1;
        }
        else if(bit1 || bit2)
        {
            if(carry)
            {
                arr[i] = 0;
                carry = 1;
            }
            else
                arr[i] = 1;
        }
        else
        {
            arr[i] =carry;
            carry = 0;
        }
    }
   
    //calculating the result
     for(int i = 0; i < 32; i++) {
        if(arr[i]) {
            result |= (1U << i);
        }
    }
    return result;
}