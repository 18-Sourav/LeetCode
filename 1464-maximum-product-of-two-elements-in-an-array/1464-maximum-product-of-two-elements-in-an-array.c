int maxProduct(int* nums, int numsSize) {
    int m1 = -1, m2 = -1;
    int curr;
    int i=0;
    
    while(i<numsSize)
    {
        curr = nums[i++];
        if(curr>=m1)
        {
            m2 = m1;
            m1 = curr;
        }
        else if(curr>=m2)
            m2 = curr;
    }
    return (m1-1)*(m2-1);
}