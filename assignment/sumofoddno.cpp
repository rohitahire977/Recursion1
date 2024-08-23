#include<iostream>
#include<algorithm>
using namespace std;
//sum of odd no.'s between a & b.
int sum(int a,int b){
    if(a==b) return b;
    return a+sum(a+2,b);
}
int main(){
    int a,b;
    cout<<"Enter 1st odd no.";
    cin>>a;
    cout<<"Enter 2nd odd no.";
    cin>>b;
    cout<<sum(a,b);
}