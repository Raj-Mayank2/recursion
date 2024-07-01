#include<iostream>
using namespace std;


void print(int cnt){
    
    if(cnt==3){
        return;
    }
    cout<<cnt<<" ";
    cnt++;
    print(cnt); 
}
int main(){
    int cnt=0;
    print(cnt);
}