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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(int i =0;i<lists.size();i++){
            ListNode* temp=lists[i];

            while(temp){
                ans.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode;
        ListNode* head = dummy;

        for(int num : ans){
            head->next= new ListNode(num);
            head=head->next;
        }

        return dummy->next;
    }
};