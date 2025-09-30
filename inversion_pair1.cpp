#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int arr1[]={1,6,7,20};
    int arr2[]={3,5,9,12};
    int m=4,n=4;
    int i=0,j=0,k=0;
    int *nums=new int[m+n];
    int inv=0;
    while(i<m &&j<n){
        if(arr1[i]<arr2[j]){
            nums[k++]=arr1[i++];
        }
        else{
            nums[k++]=arr2[j++];
            inv+=(m-i);
        }
    }
    cout<<inv<<endl;
    for(int p =0;p<m+n;p++){
        cout<<nums[p]<<" ";
    }
    return 0;
}