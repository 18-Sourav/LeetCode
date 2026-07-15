/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* grayCode(int n, int* returnSize) {
    int size = pow(2,n);
    int *result = malloc(sizeof(int)*size);

    *returnSize = size;

    for(int i=0;i<size;i++)
        result[i] = i ^ (i>>1);
    
    return result;
}