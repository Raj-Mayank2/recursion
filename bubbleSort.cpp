#include<iostream>
using namespace std;

int bubbleSort(int *arr,int n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

int main(){
    int n=8;
    int arr[]={4,8,3,6,5,7,9,1};
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}