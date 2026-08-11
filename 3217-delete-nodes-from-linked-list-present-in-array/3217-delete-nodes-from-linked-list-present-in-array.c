/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {

    bool hash[1000001] ={0};
    for(int i=0;i<numsSize;i++)
        hash[nums[i]] = 1;

    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* curr = &dummy;

    while(curr->next!=NULL)
    {
        int found = 0;
       
        if(hash[curr->next->val])
            curr->next = curr->next->next;
        else
            curr = curr->next;
    }
    return dummy.next; 
}