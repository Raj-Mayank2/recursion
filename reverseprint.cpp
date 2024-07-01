#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    
    cout<<n<<" ";
    f(i,n-1);
    

}
int main(){
    int n=5;
    int i=1;
    f(i,n);
}