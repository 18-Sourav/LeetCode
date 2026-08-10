/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    int size  = 0;
    struct ListNode* temp = head;

    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }

    int *arr = malloc(sizeof(int)*size);
    int i=0;
    temp = head;
    while(temp!=NULL)
    {
        arr[i] = temp->val;
        temp=temp->next;
        i++;
    }

    //swapping both the indexes
    int value = arr[k-1];
    arr[k-1] = arr[size-k];
    arr[size-k] = value;

    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* curr = &dummy;
    for(int i=0;i<size;i++)
    {
        struct ListNode* node = (struct ListNode*)(malloc(sizeof(*node)));
        node->val = arr[i];
        node->next = NULL;

        curr->next = node;
        curr = curr->next;
    }
    free(arr);
    return dummy.next;
}