/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *prev = &dummy; //starts before the head

    struct ListNode *fast = head;
    struct ListNode *slow = head;

    while(fast && fast->next)
    {
        prev= prev->next;        //stops at one before the middle
        slow = slow->next;       //stops at the middle
        fast = fast->next->next;
    }
    prev->next = slow->next;

    return dummy.next;       //returning the head
}