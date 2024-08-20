// not using recursion

// using bit manipulation using power set approach
// #include<bits/stdc++.h>
// using namespace std;
// vector <string> allstring(string s){
//     int n = s.length();
//     vector <string> ans;
//     for(int i = 0; i < (1 << n); i++){
//         string sub = "";
//         for(int j = 0;j < n;j++){
//             if(i & (1 << j)){
//                 sub += s[j];
//             }
//         }
//         if(sub.length() > 0){
//             ans.push_back(sub);
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }
// int main(){
//     string s = "123";
//     vector <string> ans = allstring(s);
//     cout << "all possible string are : " << endl;
//     for(auto it : ans){
//         cout << it << " ";
//     }
//     return 0;
// }

//using recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int i, string s,string &f){
    if(i == s.length()){
        cout << f << " ";
        return;
    }
    f.push_back(s[i]);
    print(i+1,s,f);
    f.pop_back();
    print(i+1,s,f);
}
int main()
{
    string s = "123";
    string f = "";
    cout << "all possible strings are : " << endl;
    print(0,s,f);
 return 0;
}
