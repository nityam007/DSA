#include<bits/stdc++.h>
using namespace std;

int sum=0;

int Sum_With_Recursion(int i, int n){
    if(i==n){
        return i;
    }

    sum=i+Sum_With_Recursion(i+1,n);

    return sum;
}
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    int ans = Sum_With_Recursion(1,n);
    cout<<ans<<" ";
    return 0;
}