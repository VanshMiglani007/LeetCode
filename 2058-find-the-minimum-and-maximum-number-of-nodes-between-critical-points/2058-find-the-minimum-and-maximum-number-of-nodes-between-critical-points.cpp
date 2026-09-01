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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        vector<int> dis;
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* forw = head->next->next; // forward
        int l = 0;
        while (forw) {
            if (curr->val > prev->val && curr->val > forw->val ||
                curr->val < prev->val && curr->val < forw->val) {
                dis.push_back(l);
            }
            l++;
            prev = prev->next;
            curr = curr->next;
            forw = forw->next;
        }
        if(dis.size()<2) return {-1,-1};
        int i = 0;
        int k = 1;
        int r = dis.size() - 1;
        int mn = INT_MAX;
        int mx = 0;
        while (k <= r) {
            mn = min(mn, dis[k] - dis[i]);
            i++;
            k++;
        }
        ans.push_back(mn);
        ans.push_back(dis[r] - dis[0]);
        return ans;
    }
};