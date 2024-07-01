#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    if (size==0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else {
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }

}
int main(){
    int n=5;
    int arr[]={1,2,4,5,6};
    bool ans=isSorted(arr,n);
    cout<<ans;

}