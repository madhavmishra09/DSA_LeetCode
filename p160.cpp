/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ha=headA;
        ListNode* hb=headB;
        while(ha!=hb)
        {
             ha=(ha==nullptr)?headB:ha->next;
             hb=(hb==nullptr)?headA:hb->next;
        }
        return ha;        
    }
};