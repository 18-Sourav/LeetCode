int removeDuplicates(int* nums, int numsSize) {
    int j = 0; //inplace pointer
    int i = 1;
    int count = 1;
    while(i<numsSize)
    {
        if(nums[j]==nums[i])
        {
            if(count<2)
            {
                count++;
                nums[++j]=nums[i++];
            }
            else
                i++;
        }
        else
        {
            nums[++j]=nums[i++];
            count = 1;
        }
    }
    return j+1;
}