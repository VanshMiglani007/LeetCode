class Solution {
public:
    void dfs(vector<vector<int>>& adj,vector<bool>&visited,int node){
        visited[node]=true;
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                dfs(adj,visited,neighbour);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size(),false);
        dfs(rooms,visited,0);
        for(bool room:visited){
            if(!room){
                return false;
            }
        }
        return true;
    }
};