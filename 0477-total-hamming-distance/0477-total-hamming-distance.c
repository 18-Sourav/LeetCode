int totalHammingDistance(int* nums, int numsSize) {
    int sum = 0;
    for(int i=0;i<32;i++)
    {
        int ones_cnt = 0;
        for(int j=0;j<numsSize;j++)
        {
            if((nums[j]>>i)&1) //at each bit we are checking for all the array elements
                ones_cnt++;
        }
        int zero_cnt = numsSize - ones_cnt;
        sum+= ones_cnt*zero_cnt;  //this multiplication gives the max pairs formed
    }
    return sum;
}