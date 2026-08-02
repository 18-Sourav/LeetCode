/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {

    struct ListNode* temp = head;
    int size = 0;

    //Finding the size of the Linked List
    while(temp)
    {
        temp = temp->next;
        size++;
    }

    //Array for storing the Linked List values
    int *arr = calloc(size, sizeof(int));
    temp = head;

    //Converting the linked List to an array
    for(int i=0;i<size;i++)
    {
        arr[i] = temp->val;
        temp = temp->next;
    }

    //resultant array to store the larger nodes values
    int *result = calloc(size, sizeof(int));

    //stack to find the next largest node
    int *stack = (int*)malloc(sizeof(int)*size);
    int top = -1;

    *returnSize = size;

    for(int i=0;i<size;i++)
    {
         // While stack is not empty and current element is larger than stack's top element
        while(top >= 0 && arr[i] > arr[stack[top]]) {
            result[stack[top]] = arr[i]; // Update result for the popped index
            top--; // Pop from stack
        }
        stack[++top] = i; // Push the current index onto the stack

    }

    return result;

    
}