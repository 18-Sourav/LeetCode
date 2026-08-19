/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int)* numsSize/2);
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        int index = abs(nums[i])-1;
        if(nums[index]>0)
            nums[index] = -nums[index];
        else
            result[j++]=abs(nums[i]);    
    }
    *returnSize = j;

    return result;
}