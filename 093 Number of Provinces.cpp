void dfs( int node , vector<vector<int>>& isConnected,vector<int>&vis){
    vis[node]=1;
    for(int i = 0 ; i<isConnected[node].size() ; i++){
        int j = isConnected[node][i];
        if(vis[j]==0)dfs(j,isConnected,vis);
    }
}

int solve(vector<vector<int>> isConnected){
//CODE HERE 
    int n = isConnected.size(),cnt=0;
    vector<vector<int>>adj(n);
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(isConnected[i][j]==1 && i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<int>vis(n,0);
    for(int i = 0 ;i<n ;i++){
        if(vis[i] ==0){
            cnt++;
            dfs(i,adj,vis);
        }
    }
    return cnt;
}
