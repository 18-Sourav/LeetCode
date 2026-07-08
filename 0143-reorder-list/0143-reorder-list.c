/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    struct ListNode *second  = slow->next; //second half list
    slow->next = NULL; //first half ending

    //For Second list reversal
    struct ListNode *prev = NULL;
    struct ListNode *curr = second;
    struct ListNode *next = NULL;

    while(curr)
    {
        next = curr->next; //saving the next node
        curr->next = prev; //Linking the previous node
        prev = curr;
        curr = next;
    }
    second  = prev;

    struct ListNode *list1 = head;
    struct ListNode *list2 = second;

    while (list2)
    {
        struct ListNode *next1 = list1->next; //saving the next nodes
        struct ListNode *next2 = list2->next;

        list1->next = list2;  //conecting the alternate nodes
        list2->next = next1;

        list1 = next1;  //updating the pointer to next node
        list2 = next2;
    }

}