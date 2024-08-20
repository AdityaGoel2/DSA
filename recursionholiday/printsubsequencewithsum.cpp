// printing all subsequence with sum k
// #include<iostream>
// #include<vector>
// using namespace std;
// void prt(int index, vector<int> ds, int init, int sum, int arr[], int n){
//     if(index == n){
//         if(init == sum){
//             for(auto it : ds) cout << it << " ";
//             cout << endl;
//         }
//         return;
//     }
//     ds.push_back(arr[index]);
//     init = init + arr[index];
//     prt(index+1, ds, init, sum, arr, n);
//     init = init - arr[index];
//     ds.pop_back();
//     prt(index+1, ds, init, sum, arr, n);
// }
// int main(){
//     int arr[] = {1,2,3,4,2,1};
//     int n = 6;
//     int sum = 4;
//     vector<int> ds;
//     prt(0 ,ds ,0 ,sum ,arr ,n);
//     return 0;
// }

// printing only one subsequence with sum k
// #include<iostream>
// #include<vector>
// using namespace std;
// bool prt(int index, vector<int> ds, int init , int sum , int arr[] , int n){
//   if(index == n){
//     if(init == sum){
//         for(auto it : ds) cout << it << " ";
//         cout << endl;
//         return true;
//     }
//     else{
//         return false;
//     }
//   }  
//   ds.push_back(arr[index]);
//   init += arr[index];
//   if(prt(index+ 1,ds,init,sum,arr,n) == true){ return true; }
//   init -= arr[index];
//   ds.pop_back();
//   if(prt(index +1,ds,init,sum,arr,n) == true){ return true; }
//   return false;
// }
// int main(){
//     int arr[] = { 1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     prt(0 , ds , 0 , sum , arr , n);
// return 0;
// }

//print amount of subsequence which have sum k
// #include<iostream>
// #include<vector>
// using namespace std;
// int prt(int index , vector <int> ds , int init , int sum , int arr[] , int n){
//     if(index == n){
//         if(init == sum){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }// isme ds hta bhi sakte hai
//     ds.push_back(arr[index]);
//     init += arr[index];
//     int l = prt(index+1,ds,init,sum,arr,n);
//     init -= arr[index];
//     ds.pop_back();
//     int r = prt(index+1,ds,init,sum,arr,n);
//     return l+r;
// }
// int main(){
//     int arr[] = {1,2,1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     cout << prt(0 , ds , 0 , sum , arr , n);
// return 0;
// }
