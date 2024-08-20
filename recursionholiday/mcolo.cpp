#include<bits/stdc++.h>
using namespace std;
#define v 4
void printsol(int color[]){
    cout << "solution exists : " << endl;
    cout << "following is the list of color : ";
    cout << endl;
    for(int i = 0;i < v;i++){
        cout << color[i];
    }
}
bool issafe(int index,bool graph[v][v],int color[],int c){
    for(int i = 0;i < v;i++){
        if(graph[index][i] && c == color[i]){
            return false;
        }
    }
    return true;
}
bool colorg(bool graph[v][v],int m,int color[],int index){
    if(index == v){
        return true;
    }
    for(int i = 1;i <= m;i++){
        if(issafe(index,graph,color,i)){
            color[index] = i;
        
        if(colorg(graph,m,color,index+1) == true){
            return true;
        }
        color[index] = 0;
    }
    }
    return false;
}
bool graphcolor(bool graph[v][v],int m){
    int color[v];
    for(int i = 0;i < v;i++){
        color[i] = 0;
    }
    if(colorg(graph,m,color,0) == false){
        cout << "solution does not exist";
        return false;
    }
    printsol(color);
    return true;

}
int main()
{
    bool graph[v][v] = {{0,1,1,1},
                        {1,0,1,0},
                        {1,1,0,1},
                        {1,0,1,0}};
    int m = 3;
    graphcolor(graph,m);
 return 0;
}