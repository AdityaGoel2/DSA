#include<iostream>
using namespace std;
void print(int board[4][4]){
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            if(board[i][j]){
                cout << "Q ";
            }
            else{
                cout << ". ";
            }
        }
        cout << endl;
    }
}
bool issafe(int board[4][4],int row,int col){
    int i,j;
    for(i = 0 ;i < col;i++){
        if(board[row][i]){
            return false;
        }
    }
    for(i = row , j = col; i >= 0 && j >= 0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }
    for(i = row,j = col;i < 4 && j >= 0;i++,j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}
bool solve(int board[4][4],int col){
    if(col >= 4){
        return true;
    }
    for(int i = 0;i < 4;i++){
        if(issafe(board,i,col)){
            board[i][col] = 1;
            if(solve(board,col+1)){
                return true;
            }
            board[i][col] = 0;
        }
    }
    return false;
}
int main()
{
    int board[4][4] = {{0 ,0 ,0 ,0},
                       {0 ,0 ,0 ,0},
                       {0 ,0 ,0 ,0},
                       {0 ,0 ,0 ,0}};
    if(solve(board , 0) == false){
        cout << "no solution exists :[";
        return 0;
    }
    print(board);
 return 0;
}