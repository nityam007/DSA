#include<bits/stdc++.h>
using namespace std;

void swap (int * arr, int l, int r){
    int temp=arr[r];
    arr[r]=arr[l];
    arr[l]=temp;
}

void rev (int *arr, int l, int r){
    if(l>=r){
        return;
    }

    swap(arr, l,r);
    rev(arr, l+1, r-1);
}
void rev_just_print(int* arr, int n, int i){
    if(i==n-1){
        cout<<arr[i]<<" ";
        return;
    }

    rev_just_print(arr, n, i+1);
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[6] = {10,20,30,40,50,60};
    rev_just_print(arr, 6,0);
    rev(arr,0,5);
    cout<<"\n";

    for(int i=0;i<6;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}