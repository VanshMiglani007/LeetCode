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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode*prevtemp=&dummy;

        while(true){
            ListNode*kth=prevtemp;
            for(int i =0;i<k&&kth;i++){
                kth=kth->next;
            }
            if(!kth) break;

            ListNode*tempstart=prevtemp->next;
            ListNode*tempnext=kth->next;

            ListNode*prev=tempnext;
            ListNode*curr=tempstart;

            while(curr!=tempnext){
                ListNode*temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
            prevtemp->next=kth;
            prevtemp=tempstart;
        }
        return dummy.next;
    }
};