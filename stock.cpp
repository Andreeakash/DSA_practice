#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int stock_buyAndSell(int arr[],int n){
    int mini = arr[0];
    int maxi = INT_MIN;
    for(int i =1;i<n;i++ ){
        mini=min(mini,arr[i]);
        int profit=arr[i]-mini;
        maxi = max(maxi,profit);
    }
    return maxi;

};
int main(){
    int arr []={7,1,4,5,6,4};
    int n =6;
    int result =stock_buyAndSell(arr,n);
    cout<<result;
    return 0;
    

}