#include<iostream>
using namespace std;
//for n=4 4321234
void sequence(int n){
    if(n==1) {
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    sequence(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sequence(n);
}