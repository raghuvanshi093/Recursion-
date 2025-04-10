#include<iostream>
using namespace std;
bool isPowerofTwo(int n){
    if(n==1)return true;
    if(n==0||n%2!=0)
    return false;
    return isPowerofTwo(n/2);
}
int main(){
    int n;
    cout<<"Enter a postive num";
    cin>>n;
    if(isPowerofTwo(n)){
    cout<<n<<"is a power of 2"<<endl;
    }

    else{
    cout<< n<<"is not power of 2"<<endl;
    }
}