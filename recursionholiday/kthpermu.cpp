#include<bits/stdc++.h>
using namespace std;
string getpermu(vector<int> &arr,int n,int k){
    int fact = 1;
    for(int i = 1;i < n;i++){
        fact = fact * i;
    }
    string ans = " ";
    k = k - 1;
    while(true){
        ans = ans + to_string(arr[k/fact]);
        arr.erase(arr.begin()+k/fact);
        if(arr.size() == 0){
            break;
        }
        k = k % fact;
        fact = fact / arr.size();
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,6,4,8};
    int n = 5;
    int k = 25;
    string ans = getpermu(arr,n,k);
    cout << ans;
 return 0;
}