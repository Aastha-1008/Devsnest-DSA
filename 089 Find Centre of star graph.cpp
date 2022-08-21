#include <bits/stdc++.h>
int solve(vector<vector<int>> edges){
//CODE HERE 

    vector<int>v(edges.size()+1);
    for(int i = 0 ; i<edges.size() ; i++){
        v[edges[i][0]-1]++;
        v[edges[i][1]-1]++;
    }
    for(int i = 0 ; i<v.size() ; i++){
        if(v[i]==edges.size())return i+1;
    }
    return -1;
}
