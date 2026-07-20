void rotate(int* nums, int numsSize, int k) {
k=k%numsSize;
if(numsSize<2)
 return;
 else{
    for(int i=0;i<numsSize/2;i++)// reversing the complete array
    {
        int temp=nums[i];
        nums[i]=nums[numsSize-i-1];
        nums[numsSize-i-1]=temp;
    }
    for(int i=0;i<k/2;i++)
    {
        int temp=nums[i];
        nums[i]=nums[k-i-1];
        nums[k-i-1]=temp;
    }
   for(int i = k; i < k + (numsSize - k)/2; i++)
   {
        int temp = nums[i];
        nums[i] = nums[numsSize - 1 - (i - k)];
        nums[numsSize - 1 - (i - k)] = temp;
    }
}
}