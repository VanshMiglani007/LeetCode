class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];

        for (auto &it : flights) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<vector<int>> q;
        q.push({0, src, 0}); // stops, node, cost

        vector<int> dist(n, 1e9);
        dist[src] = 0;

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int stops = it[0];
            int node = it[1];
            int cost = it[2];

            if (stops > k) continue;

            for (auto &adjNode : adj[node]) {
                int next = adjNode.first;
                int price = adjNode.second;

                if (cost + price < dist[next] && stops <= k) {
                    dist[next] = cost + price;
                    q.push({stops + 1, next, cost + price});
                }
            }
        }

        return dist[dst] == 1e9 ? -1 : dist[dst];
    }
};