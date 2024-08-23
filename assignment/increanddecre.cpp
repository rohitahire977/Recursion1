#include<iostream>
using namespace std;
//for n=4 1234321
void sequence(int a,int n){
    if(a==n) {
        cout<<a<<" ";
        return;
    }
    cout<<a<<" ";
    sequence(a+1,n);
    cout<<a<<" ";
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sequence(1,n);
}