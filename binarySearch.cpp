#include<iostream>
using namespace std;


bool binarySearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return  binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }

}
int main(){
    int arr[]={2,3,4,56,67,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=87;
    int s=0;
    int e=n-1;
    cout<<binarySearch(arr,s,e,k);
}