/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    if (numsSize <= 0) {
        *returnSize = 0;
        return NULL;
    }

    qsort(nums, numsSize, sizeof(int), compare);

    int capacity = 10;
    int *result = malloc(capacity * sizeof(int));
    int j = 0;

    for (int i = 1; i < numsSize; i++) {
        int diff = nums[i] - nums[i-1];
        if (diff > 1) 
        {  
            for (int x = nums[i-1] + 1; x < nums[i]; x++) 
            {
                if (j >= capacity) 
                {
                    capacity *= 2;
                    result = realloc(result, capacity * sizeof(int));
                }
                result[j++] = x;
            }
        }
    }
    *returnSize = j;
    return result;
}