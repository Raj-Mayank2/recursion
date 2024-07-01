#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    f(i+1,n);

}
int main(){
    int n=5;
    int i=1;
    f(i,n);
}