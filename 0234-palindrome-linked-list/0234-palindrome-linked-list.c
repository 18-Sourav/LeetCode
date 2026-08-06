/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    struct ListNode* slow = head, *fast = head;

    while(fast!=NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode * curr = slow, *prev = NULL;

    while(curr!=NULL)
    {
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    struct ListNode* first = head, *second=prev;

    while(first!=NULL && second!= NULL)
    {
        if(first->val!=second->val)
        {
            return false;
        }
        first=first->next;
        second=second->next;
    }
    return true;



}