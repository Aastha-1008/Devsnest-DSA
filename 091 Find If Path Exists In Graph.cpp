#include<queue>
int solve(int n, vector<vector<int>> edges, int source, int destination){
//CODE HERE 
    map<int,vector<int>>m;
    int u,v;
    for(int  i = 0 ; i< edges.size() ; i++){
        u = edges[i][0];
        v = edges[i][1];
        m[u].push_back(v);
        m[v].push_back(u);
    }
    vector<int>vis(n,0);
    queue<int>q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        if(f == destination) return true;
        for(int i = 0 ; i<m[f].size() ; i++){
            if(vis[m[f][i]] == 0 ){
                q.push(m[f][i]);
                vis[m[f][i]] = 1;
            }
        }
    }
    return 0;
}
