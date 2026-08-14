/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;
    dummy.val = 0;

    struct ListNode* curr = &dummy;
    curr= curr->next->next;
    struct ListNode* temp = &dummy;
    int sum = 0;

    while(curr!=NULL)
    {
        if(curr->val == 0)
        { 
            temp = temp->next;
            temp->val = sum;
            sum = 0;
        }
        else
            sum+=curr->val;
        curr = curr->next;
    }
    temp->next = NULL;
    return dummy.next;
}