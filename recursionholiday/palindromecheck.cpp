// array reverse using 2 pointer
// #include<iostream>
// using namespace std;
// void swapp(int a[],int l,int r){
//     if(l >= r){
//         return;
//     }
//     int temp = a[l];
//     a[l] = a[r];
//     a[r] = temp;
//     swapp(a,l+1,r-1);
// }
// int main(){
//     int a[] = {1,2,3,4,5,6};
//     swapp(a,0,5);
//     for(int i = 0;i < 6;i++){
//             cout << a[i] << " ";
//     }
// }

// array reverse using 1 pointer
// #include<iostream>
// using namespace std;
// void print(int arr[],int n,int i){
//     if(i >= n/2){
//         return;
//     }
//     int temp = arr[i];
//     arr[i] = arr[n-i-1];
//     arr[n-i-1] = temp;
//     return print(arr,n,i+1);
// }
// int main(){
//     int n;
//     cout << "enter number of elements : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements : ";
//     for(int i = 0;i < n;i++){
//         cin >> arr[i];
//     }
//     print(arr,n,0);
//     for(int i = 0;i < n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool palindrome(int arr[],int n,int i){
    if(i >= n/2){
        return true;
    }
    else if(arr[i] != arr[n-i-1]){
        return false;
    }
    return palindrome(arr,n,i+1);
}
int main(){
    int n;
    cout << "enter number of elements : " ;
    cin >> n;
    int arr[n];
    cout << "enter elements of array : ";
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << palindrome(arr,n,0);
    return 0;
}