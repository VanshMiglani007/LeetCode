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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head||!head->next||left==right) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode*temp1=&dummy;

        for(int i=1;i<left;i++){
            temp1=temp1->next;
        }
        ListNode*temp2=temp1->next;
        ListNode*curr=temp2;
        ListNode*prev=nullptr;
        for(int i=left;i<=right;i++){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        temp1->next=prev;
        temp2->next=curr;

        return dummy.next;
    }
};