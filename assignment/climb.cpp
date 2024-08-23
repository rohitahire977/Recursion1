#include<iostream>
#include<algorithm>
using namespace std;
//total no. of ways to climb stair of n steps
//if you take exactly 1,2 or 3 steps
int stair(int n){
    //stair of 1 size is climb by 1 way
    if(n==1) return 1;

    //stair of 2 size is climb by 2 ways
    if(n==2) return 2;

    //stair of 3 size is climb by 4 ways
    //111 12 21 3
    if(n==3) return 4;

    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<stair(n);
}