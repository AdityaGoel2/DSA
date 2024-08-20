// using for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number of elements you want to see : ";
//     cin >> n;
//     int arr[n];
//     arr[0] = {0};
//     arr[1] = {1};
//     for(int i = 2;i < n;i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }
//     for(int i = 0;i < n;i++){
//         cout << arr[i] << " ";
//     }
//  return 0;
// }

// using recursion 
#include<iostream>
using namespace std;
int fib(int n){
    if(n == 0){
        return false;
    }
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout << "enter number of elements you want to display : ";
    cin >> n;
    // cout << fib(n);
    for(int i = 1;i < n+1;i++){
        cout << fib(i) << " ";
    }
}