#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
int sumOfarr(int index,int arr[],int n, int sum ){
    if(index == n){
        return sum;
    }
    return sumOfarr(index+1,arr,n,sum+arr[index]);

}
int find_sum(int n , int arr[]){
    if(n==0) return 0;
    return find_sum(n-1,arr+1)+arr[0];
}
int main(){
    int * arr=new int[25];
    int n  ;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int sum = sumOfarr(0,arr,n, sum);
    // cout<<sum;
    int sum = find_sum(n, arr);
    cout<<sum;
}