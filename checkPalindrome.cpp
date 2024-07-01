#include<iostream>
using namespace std;

bool checkPalindrome(string &str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkPalindrome(str,i+1,j-1);
    }
}
int main(){
    string str="abba";
    int i=0;
    int j=str.size()-1;
    cout<<checkPalindrome(str,i,j);
}