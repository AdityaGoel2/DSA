// pick a pivot and put it in its correct place
// smalleron left and larger on right
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(i < j){
            while(arr[i] <= pivot && i <= high ){
                i++;
            }
            while(arr[j] > pivot && j >= low){
                j--;
            }
            if(i < j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[j],arr[low]);
        return j;
    }
}
void qs(vector<int> & arr,int low, int high){
    if(low <= high){
        int pindex = partition(arr,low,high);
        qs(arr,low,pindex - 1);
        qs(arr,pindex + 1,high);
    }
}
int main()
{
    vector<int> arr = {4,6,2,5,7,9,1,3};
    qs(arr, 0 , arr.size() - 1);
    for(auto it : arr){
        cout << it << " ";
    }

 return 0;
}
// left se i chalta hai aur pivot se bda element khojta hai aur right se j chalta hai aur pivot se chhota element khojta hai jidhar mil
// jaye udhar rok do dono ko aur swap kar do
// divide and conquer algo
