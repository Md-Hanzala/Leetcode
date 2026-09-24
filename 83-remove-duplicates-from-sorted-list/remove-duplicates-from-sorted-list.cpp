class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* first=head;
        if(head==NULL){
            return head;
        }
        while(first != NULL && first->next != NULL){
        while(first->next != NULL && first->val == first->next->val){
            ListNode* second=first->next;
            first->next=second->next;
            second->next=NULL;
        }
            first=first->next;
        }
        return head;
    }
};