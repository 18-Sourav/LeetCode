/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    *returnSize = temperaturesSize;
    int* result = (int*)calloc(temperaturesSize, sizeof(int));
    if (result == NULL) return NULL;
    
    // Array to simulate a stack storing indices of the temperatures
    int* stack = (int*)malloc(temperaturesSize * sizeof(int));
    if (stack == NULL) {
        free(result);
        return NULL;
    }
    int top = -1; // Stack pointer
    
    for (int i = 0; i < temperaturesSize; i++) {
        // While stack is not empty and current temperature is warmer than stack's top temperature
        while (top >= 0 && temperatures[i] > temperatures[stack[top]]) {
            int prevIndex = stack[top--];
            result[prevIndex] = i - prevIndex;
        }
        // Push the current index onto the stack
        stack[++top] = i;
    }
    
    free(stack);
    return result;
}
