#include <iostream>
using namespace std;

int linearSearch(int *arr,int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,n-1,k);
        return remainingPart;
    }
}

int main(){
    int arr[]={4,2,4,13,45,67,42};
    int k=45;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr,n,k);
}