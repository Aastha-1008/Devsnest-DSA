#include<bits/stdc++.h>
int solve(int n, vector<vector<int>> prerequisites){
//CODE HERE 
        vector<int>indirect(n,0);
        vector<int>adj[n];
        for(auto &it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            for(auto &it:adj[i]){
                indirect[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indirect[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            int vert = q.front();
            q.pop();
            for(auto &it:adj[vert]){
                indirect[it]--;
                if(indirect[it]==0)q.push(it);
            }
            topo.push_back(vert);
        }
        return (topo.size()==n);
    
}
