/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void merge(int*nums,int left, int mid, int right)
{
    int i=left; int j = mid+1; int k=0;
    //taking a temp array
    int temp[right-left+1];

    while(i<=mid && j<=right)
    {
        if(nums[i]<=nums[j])
        {
            temp[k]=nums[i];
            i++;
        }
        else
        {
            temp[k]=nums[j];
            j++;
        }
        k++;
    }

    //coying the remaining elements
    while(i<=mid)
        temp[k++] = nums[i++];
    
    while(j<=right)
        temp[k++] = nums[j++];

    //coying back to nums
    for(i=left,k=0;i<=right;i++,k++)
        nums[i]=temp[k];    
}
void mergeSort(int* nums, int left, int right)
{
    if(left>=right)
        return;
    int mid = left+(right-left)/2;

    //left half we are breaking
    mergeSort(nums,left,mid);
    //right half we are breaking
    mergeSort(nums,mid+1,right);

    //merging both the halves
    merge(nums,left,mid,right);
} 

int* sortArray(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = numsSize;
    mergeSort(nums,0,numsSize-1);

    return nums;
}