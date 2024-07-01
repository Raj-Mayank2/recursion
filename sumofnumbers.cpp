#include<iostream>
using namespace std;

void sumx(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    sumx(n-1,sum+n);
}
int main(){
    int n=5;
    sumx(n,0);
}