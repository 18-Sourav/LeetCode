int longestSubarray(int* nums, int numsSize) {
    int left = 0, right = 0;
    int ones_cnt = 0, zero_cnt = 0;
    int max_len = 0, curr_len = 0;

    while(left<numsSize)
    {
        if(right<numsSize && nums[right])
            ones_cnt++;
        else
            zero_cnt++;    
        while(zero_cnt>1)
        {
            if(left<numsSize && nums[left])
                ones_cnt--;
            else
                zero_cnt--; 
            if(left<numsSize)       
                left++;
        }
        curr_len = right-left;

        if(max_len<curr_len)
            max_len = curr_len;

        if(right<numsSize)
            right++;
    }
    if(max_len == numsSize)
        max_len--;
    return max_len;
}