// without recursion
// #include<bits/stdc++.h>
// using namespace std;
// int counts(int arr[],int n){
//     int invct = 0;
//     for(int i = 0;i < n-1;i++){
//         for(int j = i + 1;j < n;j++){
//             if(arr[i] > arr[j]){
//                 invct++;
//             }
//         }
//     }
//     return invct;
// }
// int main()
// {
//     int arr[] = {7,5,2,3,6,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int invct = counts(arr,n);
//     cout << invct;
//  return 0;
// }

//with recursion
#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k;
    int invcount = 0;
    i = left;
    j = mid;
    k = left;
    while((i <= mid - 1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++]; 
        }
        else{
            temp[k++] = arr[j++];
            invcount += (mid - i);
        }
    }
    while(i <= mid - 1){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(i = left;i <= right ;i++){
        arr[i] = temp[i];
    }
    return invcount;
}
int mrsort(int arr[],int temp[],int left,int right){
    int mid;
    int cnt = 0;
    if(right > left){
        mid = (right + left)/2;
        cnt += mrsort(arr,temp,left,mid);
        cnt += mrsort(arr,temp,mid+1,right);

        cnt += merge(arr,temp,left,mid+1,right);
    }
    return cnt;
}
int mergesort(int arr[],int n){
    int temp[n];
    return mrsort(arr,temp,0,n-1);
}
int main()
{
    int arr[] = {7,5,2,3,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = mergesort(arr,n);
    cout << ans;
 return 0;
}