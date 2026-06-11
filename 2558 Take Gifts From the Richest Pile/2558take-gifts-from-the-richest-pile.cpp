class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;

        long long sum =0;

        for(int x:gifts){
            pq.push(x);
            sum+=x;
        }
        while(k>0){
            long long mx=pq.top();
            pq.pop();

            long long st=sqrt(mx);

            sum-=mx;
            sum+=st;

            pq.push(st);
            k--;
        }
        return sum;
    }
};