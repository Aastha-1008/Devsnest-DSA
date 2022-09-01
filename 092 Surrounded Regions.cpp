void find(int i,int j,int row,int col,vector<vector<string>>&board){
        int n=board.size(),m=board[0].size();
        if(i<0||j<0||i>=row||j>=col||board[i][j]!="O"){
            return ;
        }
        board[i][j]="1";
        find(i+1,j,row,col,board);
        find(i,j+1,row,col,board);
        find(i-1,j,row,col,board);
        find(i,j-1,row,col,board);

    }
vector<vector<string>> solve(vector<vector<string>> board){
//CODE HERE 
    int row = board.size();
    int col = board[0].size();
        
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if( i == 0 || j == 0 || i== row-1 || j == col-1){
                find(i,j,row,col,board);
            }
        }
    }
        
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(board[i][j]=="X" || board[i][j]=="O"){
                board[i][j] = "X";
            }
            else{
                board[i][j] = "O";
            }
        }
    }
    return board;
}
