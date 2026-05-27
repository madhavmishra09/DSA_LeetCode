class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallH = new ListNode(0);
        ListNode* largeH = new ListNode(0);
        ListNode* small = smallH;
        ListNode* large = largeH;
        ListNode* curr = head;
        while(curr != NULL){
            if(curr->val < x){
                small->next = curr;
                small = small->next;
            }
            else{
                large->next = curr;
                large = large->next;
            }
            curr = curr->next;
        }
        large->next = NULL;
        small->next = largeH->next;
        return smallH->next;
    }
};