// n to 1
// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i > n){
//         return;
//     }
//     else{
//         print(i+1,n);
//         cout << i << endl;
//     }
// }
// int main(){
//     int n;
//     cout << "enter end number : ";
//     cin >> n;
//     print(1,n);
// return 0;
// }

// 1 to n
#include<iostream>
using namespace std;
void print(int n){
    if(n < 1){
        return;
    }
    else{
        print(n-1);
        cout << n << endl;
    }
}
int main(){
    int n;
    cout << "enter end number : ";
    cin >> n;
    print(n);
return 0;
}