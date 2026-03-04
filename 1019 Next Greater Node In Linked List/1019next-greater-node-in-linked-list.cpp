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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vc;
        ListNode* temp = head;
        while (temp) {
            vc.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> res(vc.size(),0);
        stack<int> st;
        for (int i = vc.size() - 1; i >= 0; i--) {
            while (!st.empty()) {
                if(st.top()<=vc[i]){
                    st.pop();
                }
                else break;
            }
            if(!st.empty()) res[i]=st.top();
            st.push(vc[i]);
        }
        return res;
    }
};