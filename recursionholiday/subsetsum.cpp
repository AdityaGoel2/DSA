#include<bits/stdc++.h>
using namespace std;
void findsum(int index,vector<int> &arr,int n,vector<int> &ds,int sum){
    if(index == n){
        ds.push_back(sum);
        return;
    }
    findsum(index+1,arr,n,ds,sum + arr[index]);
    findsum(index+1,arr,n,ds,sum);
}
int main(){
    vector<int> arr = {3 , 1 , 2};
    int n = arr.size();
    vector<int> ds;
    findsum(0,arr,n,ds,0);
    sort(ds.begin(),ds.end());
    for(auto it : ds){
        cout << it << " ";
    }
    return 0;
}