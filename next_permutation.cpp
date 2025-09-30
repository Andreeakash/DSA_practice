#include<iostream>
using  namespace std;
#include<bits/stdc++.h>
#include<algorithm>

void next_permute(int arr[], int n,vector<int>&ans){
    int breakpoint =-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            breakpoint =i;
            break;

        }
        
    }
    if(breakpoint==-1){
        reverse(arr,arr+n);
    }
    int j=n-1;
    while(j>breakpoint){
        if(arr[j]>arr[breakpoint]){
            swap(arr[j],arr[breakpoint]);
            break;
        }
        j--;

    }
    sort(arr+breakpoint+1,arr+n);
    
    for(int i =0;i<n;i++){
        ans.push_back(arr[i]);
    }
    
    

    
}
int main(){
    int arr[]={1 ,3 ,5,4};
    int n =4;
    vector<int>ans;
    next_permute(arr,n,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
}