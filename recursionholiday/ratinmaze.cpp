#include<bits/stdc++.h>
using namespace std;
string direction = "DLRU";
int dr[4] = {1 ,0 ,0 ,-1};
int dc[4] = {0, -1, 1, 0};
bool isvalid(int row,int col,int n,vector<vector<int>> maze){
    return row >= 0 && col >= 0 && row < n && col < n && maze[row][col];
}
void findp(int row,int col,vector<vector<int>> &maze,int n,string &currpath,vector<string> &result){
    if(row == n-1 && col == n-1){
        result.push_back(currpath);
        return;
    }
    maze[row][col] = 0;
    for(int i = 0;i < 4;i++){
        int nextr = row + dr[i];
        int nextc = col + dc[i];
        if(isvalid(nextr,nextc,n,maze)){
            currpath += direction[i];
            findp(nextr,nextc,maze,n,currpath,result);
            currpath.pop_back();
        }
    }
    maze[row][col] = 1;
}
int main()
{
    vector<vector<int>> maze = {{1 , 0 , 0 , 0},
                                {1 , 1 , 1 , 1},
                                {1 , 0 , 1 , 0},
                                {1 , 1 , 1 , 1}};
    int n = maze.size();
    string currpath = " ";
    vector<string> result;
    
    if(maze[0][0] != 0 && maze[n-1][n-1] != 0){
        findp(0 ,0 ,maze ,n ,currpath ,result);
    }
    else{
        cout << "valid path not possible";
    }
    if(result.size() == 0){
        cout << false;
    }
    else{
        for(int i = 0;i < result.size();i++){
            cout << result[i] << " ";
        }
    }
 return 0;
}