#include<bits/stdc++.h>
using namespace std;
void findresult(vector<int> &arr,int sum,vector<int> &r, vector<vector <int>> &res,int index){
    if(sum == 0){
        res.push_back(r);
        return;
    }
    while(index < arr.size() && sum - arr[index] >= 0){
        r.push_back(arr[index]);
        findresult(arr,sum-arr[index],r,res,index);
        index++;
        r.pop_back();
    }
}
vector< vector <int>> combinationalsum(vector<int> &arr,int sum){
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    vector<int> r;
    vector< vector<int>> res;
    
    findresult(arr,sum,r,res,0);
    return res;
}
int main()
{
    vector<int> arr = {2,4,6,8,5,1};
    int n = arr.size();
    int sum = 8;
    vector< vector <int> > res = combinationalsum(arr , sum);
    if(res.size() == 0){
        cout << "empty " << endl;
        return 0;
    }
    for(int i = 0; i < res.size(); i++){
        if(res[i].size() > 0){
            cout << i+1 << ". [ ";
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << " ";
            }
        cout << "]";
        cout << endl;
        }
    }

 return 0;
}