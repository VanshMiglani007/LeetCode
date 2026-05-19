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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next==NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast&&fast->next){
            slow=slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        
        ListNode*prev=NULL;
        ListNode*curr=second;
        while(curr){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        second = prev;

        ListNode*temp1=head;
        ListNode*temp2=second;
        while(temp2){
            ListNode*t1=temp1->next;
            ListNode*t2=temp2->next;

            temp1->next=temp2;
            temp2->next=t1;

            temp1=t1;
            temp2=t2;
        }
    }
};