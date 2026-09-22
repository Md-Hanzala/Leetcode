class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* man = NULL;
        ListNode* watchman = head;

        while (watchman != NULL) {
            ListNode* seeman = watchman->next;  // SAVE
            watchman->next = man;               // REVERSE
            man = watchman;                     // MOVE
            watchman = seeman;                  // MOVE
        }

        return man;
    }
};