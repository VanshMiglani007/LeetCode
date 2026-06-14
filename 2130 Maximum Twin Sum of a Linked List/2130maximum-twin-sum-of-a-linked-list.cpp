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
    int pairSum(ListNode* head) {
        if(!head) return 0;
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*second=slow->next;
        slow->next=nullptr;
        ListNode*prev=nullptr;
        ListNode*curr=second;
        while(curr){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode*temp=head;
        ListNode*temp1=prev;
        int sum=0;
        int maxsum=INT_MIN;
        while(temp1){
            sum=temp->val+temp1->val;
            maxsum=max(maxsum,sum);
            temp=temp->next;
            temp1=temp1->next;
        }
        return maxsum;
    }
};