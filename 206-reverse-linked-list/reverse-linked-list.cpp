class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* man = NULL;
        ListNode* watchman = head;
        while (watchman != NULL) {
            ListNode* seeman = watchman->next;  
            watchman->next = man;               
            man = watchman;                    
            watchman = seeman;                  
        }
        return man;
    }
};