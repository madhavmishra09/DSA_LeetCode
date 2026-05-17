/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int d,c;
        d=c=0;
        ListNode* node=head;
        ListNode* bit=head;
        while(node!=nullptr)
        {
            c++;
            node=node->next;
        }   
        while(bit!=nullptr)
        {
            d+=(int)pow(2,c-1)*bit->val;
            c--;
            bit=bit->next;
        }
        return d;
    }
};