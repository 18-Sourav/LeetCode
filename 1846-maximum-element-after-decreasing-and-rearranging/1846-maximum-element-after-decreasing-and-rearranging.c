int compare(const void *a,const void *b)
{
    int aa = *(int*) a;
    int bb = *(int*) b;
    return (aa > bb) -  (aa < bb);
}
int maximumElementAfterDecrementingAndRearranging(int* arr, int arrSize) {
    qsort(arr,arrSize,sizeof(int),compare);
    int count=1;

    for(int i=1;i<arrSize;i++)
    {
        if(arr[i]>=(count+1))
            count++;
    }
    return count;
}