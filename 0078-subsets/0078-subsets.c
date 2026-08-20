/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    //Solving using bit manipulation

    int size = (1<< numsSize); //Total number of subsets for that numsSize = 2^(numsSize)
    *returnSize = size;

    //Now decalaring the result array 
    int** result = malloc(size*sizeof(int*)); //each subset is an array
    *returnColumnSizes = malloc(size*sizeof(int)); //total ->size number of cols

    for(int mask=0; mask<size; mask++)  //building the subset 
    {
        //calculating number of elements in that particular subset
        int subset_nos = 0;
        for(int i=0;i<numsSize;i++)
        {
            if(mask&(1<<i)) //checking bit by bit of the mask in order to select the number from the array
                subset_nos++;
        }

        //Now allocating memory for that particular subset
        result[mask] = malloc(subset_nos * sizeof(int));
        (*returnColumnSizes)[mask] = subset_nos; //No. of cols in tht sub set

        int index = 0; //To traverse the result while adding

        //Now adding the sub set elements as per the mask value
        for(int j=0;j<numsSize;j++)
        {
            if(mask&(1<<j))
                result[mask][index++] = nums[j];
        }
    }
    return result;
}