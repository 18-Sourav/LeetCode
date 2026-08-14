/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {

    struct ListNode* curr = head;
    curr= curr->next;
    struct ListNode* temp = head;
    int sum = 0;

    while(curr!=NULL)
    {
        if(curr->val == 0)
        { 
            temp->val = sum;
            sum = 0;
            if(curr->next && curr->next->val!=0)
                temp = temp->next;
        }
        else
            sum+=curr->val;
        curr = curr->next;
    }
    temp->next = NULL;
    return head;
}