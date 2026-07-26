int maxSubArray(int* nums, int numsSize) {

    int sum=0, maxsum=INT_MIN;

    for (int i=0;i<numsSize;i++)
    {
        sum=nums[i]+sum;
        
        if(sum<nums[i])
            sum=nums[i]; 
         if(sum>maxsum)
            maxsum=sum;      
    }
    return maxsum;
    
}