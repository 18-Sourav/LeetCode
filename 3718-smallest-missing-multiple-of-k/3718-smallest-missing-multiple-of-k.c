int missingMultiple(int* nums, int numsSize, int k) {
    int arr[101] = {0};
    for(int i=0;i<numsSize;i++)
        arr[nums[i]]++;
    
    int j=k;
    for(;j<101;j+=k)
    {
        if(arr[j]==0)
            break;
    }
    return j;
}