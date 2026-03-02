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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessthanhead = new ListNode(0);
        ListNode* bigthanhead = new ListNode(0);
        ListNode* less = lessthanhead;
        ListNode* big = bigthanhead;

        while(head){
            if(head->val<x){
                less->next=head;
                less=less->next;
            }
            else{
                big->next=head;
                big=big->next;
            }
            head=head->next;
        }
        big->next=NULL;

        less->next=bigthanhead->next;

        return lessthanhead->next;
    }
};