#include<iostream>
using namespace std;


void f(int i,int n){
    if(i>=n){
        return;
    }
    cout<<"raj"<<" ";
    f(i+1,n);
}
int main(){
    int n=5;
    int i=0;
    f(i,n);
}