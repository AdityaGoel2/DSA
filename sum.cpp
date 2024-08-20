#include<iostream>
using namespace std;
int main()
{
    int size,sum =0;
    cout << "enter size : ";
    cin >> size;
    int arr[100];
    cout << "enter array : ";
    
    for(int i = 0;i < size; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "the sum of array is : " << sum;
 return 0;
}