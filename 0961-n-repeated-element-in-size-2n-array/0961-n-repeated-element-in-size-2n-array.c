int repeatedNTimes(int* nums, int numsSize)
{
    int hash[10001] = {0};
    for(int i = 0; i < numsSize; i++)
    {
        hash[nums[i]]++;
        if(hash[nums[i]] == 2)
            return nums[i];
    }
    return -1;
}