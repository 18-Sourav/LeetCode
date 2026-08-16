int searchInsert(int* nums, int numsSize, int target) {

    int start=0,end=numsSize-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(target==nums[mid])
            return mid;
        else if(target<nums[mid])
            end=mid-1;   
        else
            start=mid+1;
        mid=start+(end-start)/2;   

    }
    return start;
}