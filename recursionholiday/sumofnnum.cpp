// #include <iostream>
// using namespace std;
// int print(int i, int n, int sum)
// {
//     if (i > n)
//     {
//         return sum;
//     }
//     else
//     {
//         sum = sum + i;
//         print(i + 1, n, sum);
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the number of numbers you want to add : ";
//     cin >> n;
//     int sum = 0;
//     cout << print(0, n, sum);
// }

// parameterised call
// #include<iostream>
// using namespace std;
// void print(int i,int sum){
//     if(i < 1){
//         cout << sum;
//         return;
//     }
//     print(i-1 , sum+i);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n,0);
//  return 0;
// }

// functional call
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n == 1){  // chache iski jagah n == 0 karke return 0 krwa do
//         return 1;
//     }
//     return n+print(n-1);
// }
// int main(){
//     int n;
//     cout << "enter end number : ";
//     cin >> n;
//     cout << "sum of first " << n << " numbers is : " << print(n);
// }

// factorial of n
#include<iostream>
using namespace std;
int print(int n){
    if(n == 1){
        return 1;
    }
    return n * print(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << print(n);
}