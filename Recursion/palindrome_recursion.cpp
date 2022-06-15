#include<bits/stdc++.h>
using namespace std;

bool final_check = 1;

void palindrome(string s, int i){
    if(i==s.size()/2){
        return;
    }

    if(s[i]==s[s.size()-i-1]){
        palindrome(s, i+1);
    }

    else{
        final_check=0;
    }
}

int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    palindrome(s,0);

    if(final_check==1){
        cout<<"Yes, it is a Palindrome";
    }
    else{
        cout<<"No, it's not a palindrome";
    }

    return 0;
}