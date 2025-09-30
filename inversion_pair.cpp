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

    while(i<m&&j<n){
        if(arr1[i]>arr2[j]){
            nums[k]=arr2[j];
            j++,k++;
            inv+=(n-i);
        }
        else{
            nums[k]=arr1[i];
            k++,i++;
        }
    }
    
    for(int l =0;l<m+n;l++){
        cout<<nums[l]<<" ";
    }
    cout<<endl;
    cout<<inv<<endl;
}