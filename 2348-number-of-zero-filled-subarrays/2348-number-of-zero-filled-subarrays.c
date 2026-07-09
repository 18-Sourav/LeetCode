long long zeroFilledSubarray(int* nums, int numsSize) {
    long long total_count = 0;
    long long int count = 0;

    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i]==0)
            count++;
        else if(nums[i]!= 0)
        {
            total_count+= (count*(count+1))/2;
            count = 0;
        }
    }
    if(nums[numsSize-1]==0)
        total_count+= (count*(count+1))/2;
    return total_count;
}