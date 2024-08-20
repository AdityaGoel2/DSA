#include<bits/stdc++.h>
using namespace std;
void findres(int index,vector<int> &arr, vector<int> &subset, set<vector<int>> &result){
    if(!subset.empty()){
        result.insert(subset);
    }
    for(int i = index;i < arr.size();i++){
        subset.push_back(arr[i]);
        findres(i+1,arr,subset,result);
        subset.pop_back();
    }
}
vector<vector<int>> solve(vector<int> &arr){
    set<vector<int>> result;
    vector<int> subset;
    findres(0,arr,subset,result);
    vector<vector<int>> res(result.begin(),result.end());
    return res;
}
int main(){
    vector<int> arr = { 1,2,2};
    int n = arr.size();
    vector<vector<int>> result = solve(arr);
    vector<vector<int>> res;
    for(auto arr : result){
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
return 0;
}