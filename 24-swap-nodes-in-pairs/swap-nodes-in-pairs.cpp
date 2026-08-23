class Solution {
public:

    void reverse(ListNode* head, int times) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (times--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
    }

    ListNode* swapPairs(ListNode* head) {

        if (head == NULL)
            return NULL;

        ListNode* left = head;
        ListNode* right;
        ListNode* res = NULL;
        ListNode* prevleft = NULL;

        int size = 2;

        while (true) {

            right = left;

            for (int i = 0; i < size - 1; i++) {

                if (right == NULL) {
                    break;
                }

                right = right->next;
            }

            if (right) {

                ListNode* nextleft = right->next;

                reverse(left, size);

                if (prevleft)
                    prevleft->next = right;

                prevleft = left;

                if (res == NULL)
                    res = right;

                left = nextleft;
            }
            else {

                if (prevleft)
                    prevleft->next = left;

                if (res == NULL)
                    res = left;

                break;
            }
        }

        return res;
    }
};