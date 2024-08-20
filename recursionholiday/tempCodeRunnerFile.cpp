#include<bits/stdc++.h>
using namespace std;
void recurper(vector<int> &arr,vector<int> &ds,int freq[],vector<vector<int>> res){
    if(ds.size() == arr.size()){
        res.push_back(ds);
        return;
    }
    for(int i = 0;i < arr.size();i++){
        if(freq[i] == 0){
            ds.push_back(arr[i]);
            freq[i] = 1;
            recurper(arr,ds,freq,res);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> solve(vector<int> &arr){
    vector<vector<int>> res;
    vector<int> ds;
    int freq[arr.size()] = {0};
    recurper(arr,ds,freq,res);
    return res;
}
int main()
{
    vector<int> arr = {1,2,3};
    vector<vector<int>> sol = solve(arr);
    for(int i = 0;i < sol.size();i++){
        for(int j = 0;j < sol[i].size();j++){
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
 return 0;
}