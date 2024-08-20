#include<bits/stdc++.h>
using namespace std;
void findsum(int index, int currsum , int sum , vector<int> &r, vector<int> &arr){
    if(currsum == sum){
        cout << "[";
        for(int i = 0;i < r.size();i++){
            if(i != 0){
                cout << " ";
            }
            cout << r[i];
            if(i != r.size() - 1){
                cout << ", ";
            }
        }
        cout << "]" << endl;
        return;
    }
    for(int i = index; i < arr.size();i++){
        if(i > index && arr[i] == arr[i-1] ){
            continue;
        }
        if(currsum + arr[i] > sum){
            break;
        }
        r.push_back(arr[i]);
        findsum(i + 1 ,currsum + arr[i] , sum,r,arr);
        r.pop_back();

    }
}
int main(){
    vector <int> arr = {1,2,1,1,2};
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int sum = 4;
    vector<int> r;
    findsum(0 , 0 , sum , r , arr);
    return 0;
}