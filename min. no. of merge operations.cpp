#include<bits/stdc++.h>
using namespace std;
int findminOpr(int arr[], int n){
    int count = 0;
    int i=0;
    int j=n-1;
     for(int i=0;i<n-1;i++){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        if(arr[i] > arr[j]){
            j--;
            arr[j] += arr[j+1];
            count++;
        }
        if(arr[i]<arr[j]){
            i++;
             arr[i] += arr[i+1];
             count++;
        }
     }
     return count;
}
int main(){
    int arr[] = { 1, 4, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the minimum no. of merge operations is:"<<findminOpr(arr, n)<<endl; 
}
