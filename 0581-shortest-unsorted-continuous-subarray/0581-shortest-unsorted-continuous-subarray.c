int findUnsortedSubarray(int* nums, int numsSize) {
    int rt_limit = -1;

    int max = nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]<max)  //should be increasing 
            rt_limit = i;
        else
            max= nums[i];
    }
    if(rt_limit == -1)
        return 0;

    int lf_limit=0;
    int min = nums[numsSize-1];

    for(int i=numsSize-2;i>=0;i--)
    {
        if(nums[i]>min)  //should be decreasing
            lf_limit = i;
        else
            min = nums[i];    
    }

    return  rt_limit - lf_limit +1;
}