/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *prev = &dummy;
    struct ListNode *first = head;
    struct ListNode *second = first ? first->next : NULL;

    while(prev->next && prev->next->next) //checking two nodes is available or not
    {
        first->next = second->next;
        second->next = first;
        prev->next = second;

         // Move to next pair
        prev = first;
        first = first->next;

        if(first != NULL)
            second = first->next;
    }
    return dummy.next;
}