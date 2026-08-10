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
    struct ListNode * start_node = NULL;
    temp = head;
    //finding the kth node from the starting 
    for(int i=1;i<k;i++)
        temp = temp->next;
    
    start_node = temp;
    temp = head;
    struct ListNode * end_node = NULL;
    //finding the kth element from the end
    for(int i=0;i<size-k;i++)
        temp = temp->next;
    
    end_node = temp;

    int val = start_node->val;
    start_node->val = end_node->val;
    end_node->val = val;

    return head;
}