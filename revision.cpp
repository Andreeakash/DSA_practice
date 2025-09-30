#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void reverse (int n , int arr[]){
    if(n==0||n==1) return ;
    int temp ;
    temp = arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    reverse(n-2,arr+1);
}

int main(){
    int arr[]={12,23,34,45,56,67,78,89,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
