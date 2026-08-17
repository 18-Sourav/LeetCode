bool isPossibleDivide(int* nums, int numsSize, int k) {
        
    if(numsSize%k!=0)
        return false;
    int max=-1;
    for(int i=0;i<numsSize;i++)
        if(max<nums[i])
            max=nums[i];     //finding the max nos to limit the size of the memory allocation

    int *freq = calloc(max+1,sizeof(int));
    for(int i=0;i<numsSize;i++)
        freq[nums[i]]++;     //updating the frequency array
    int count= numsSize/k;
    int i=0;
    while(count--)
    {
        while(i<=max && freq[i]==0) //i us used to skip the indexes with 0 frequency
            i++;
        int p=i;        //when we get a freq>0 
        int items=0;
        while(p<=max && freq[p]>=1)  // p will iterate through the freq array
        {
            items++;    //keeps the track of the no. of elements in that segment
            freq[p]--;  //decrementing the frequency
            if(items==k)  //if the no. of elements in that segment equals k
                break;
            p++;         //iterating
        }
        if(items!=k)     //if in the last seg items are short 
            return false;
    }
    for(int j=0;j<=max;j++)   //checking if all the elements are consumed 
    {
        if(freq[j]!=0)
            return false;
    }       
    return true;    
}