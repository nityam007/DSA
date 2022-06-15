#include<bits/stdc++.h>
#include<time.h>
using namespace std;

//Print from N to 1 using backtracking

void f(int i, int num){
    if(i>num){
        return;
    }

    f(i+1,num);
    cout<<i<<" ";
}

int main(){
    
    f(1,5);
    
    return 0;

}
