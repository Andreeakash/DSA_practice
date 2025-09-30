#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void max_subarray_sum_k_size(int arr[],int n,int k){
    int m =INT_MIN;
    int sum =0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    m=max(sum,m);

    for(int i=k;i<n;i++){
        int add_idx=i;
        int rem_idx=i-k;
        sum+=arr[add_idx]-arr[rem_idx];
        m=max(sum,m);
    }
    cout<<m;
}



int main(){

    int arr[]={2,-1,3,-2,-6,-8,8,7,3};
    int n =9;
    int k=3;
    max_subarray_sum_k_size(arr,n,k);
    return 0;
}