void solve(int i , int j , vector<vector<int>>& grid , int row , int col ){
    if(i<0 || j<0 || i>=row || j>=col || grid[i][j]==0 || grid[i][j]==2)return ;
    grid[i][j] = 2;
    solve(i+1,j,grid,row,col);
    solve(i,j+1,grid,row,col);
    solve(i-1 , j,grid,row,col);
    solve(i,j-1,grid,row,col);
}

int solve(vector<vector<int>> grid){
//CODE HERE 
    int row = grid.size() ; 
    int col = grid[0].size();
    int cnt = 0 ;
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(grid[i][j]==1){
                cnt++;
                solve(i,j,grid,row,col);
            }
        }
    }
    return cnt;
}
