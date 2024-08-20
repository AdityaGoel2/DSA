#include<bits/stdc++.h>
using namespace std;
void permut(int index,vector<int> &arr,vector<vector<int>> &ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i = index;i < arr.size();i++){
        swap(arr[index],arr[i]);
        permut(index+1,arr,ans);
        swap(arr[index],arr[i]);
    }
}
int main()
{
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    permut(0,arr,ans);
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
 return 0;
}