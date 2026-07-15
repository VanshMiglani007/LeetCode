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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* curr = head;
        ListNode*prev=NULL;

        ListNode*newhead=head->next;
        
        while(curr && curr->next){
            ListNode* temp1=curr->next;
            ListNode* save=curr->next->next;

            temp1->next=curr;
            curr->next=save;
            if(prev) {
                prev->next=temp1;
            }
            prev = curr;
            curr=save;
        }
        return newhead;
    }
};