/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int* arr1 = malloc(sizeof(int)*numsSize);
    int* arr2 = malloc(sizeof(int)*numsSize);
    int ind1 = 0;
    int ind2 = 0;

    arr1[ind1] = nums[0];
    arr2[ind2] = nums[1];
    *returnSize = numsSize;
    for(int i=2;i<numsSize;i++)
    {
        if(arr1[ind1]>arr2[ind2])
            arr1[++ind1] = nums[i];
        else
            arr2[++ind2] = nums[i];    
    }
    for(int i = 0;i<=ind2;i++)
        arr1[++ind1] = arr2[i];

    return arr1;
}