int waysToSplitArray(int* nums, int numsSize) {
    //prefix sum logic i elements from left and 
    //suffix from right
    int count = 0;
    long long l_sum = 0;
    long long r_sum = 0;

    for(int i = 0 ; i < numsSize ; i++)
        r_sum += nums[i];
    
    for(int i = 0; i < numsSize - 1; i++){
        l_sum += nums[i];
        r_sum -= nums[i];
        if(l_sum >= r_sum)
            count++;
    }
    return count;

}