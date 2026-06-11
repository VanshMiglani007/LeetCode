class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int x : stones) pq.push(x);

        while(pq.size()>1){
            int l=pq.top(); 
            pq.pop();
            int r=pq.top(); 
            pq.pop();

            if(l!=r){
                pq.push(l-r);
            }
        }
        if(pq.empty()) return 0;
        else return pq.top();
    }
};