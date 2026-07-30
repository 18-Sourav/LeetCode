int missingNumber(int* nums, int numsSize) {
    int sum=0;
    int lar=nums[0];
    int i=0;
    for( i=0;i<numsSize;i++)
    {
        sum+=nums[i];
    }

    int add= numsSize*(numsSize+1)/2 ;

    return add-sum;       
  
}