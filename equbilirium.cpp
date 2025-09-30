#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int equbilirium(int arr[], int n){
    int sum =0;
    for(int i=0;i<n;i++ )
    sum +=arr[i];

    int lsum=0;
    int rsum=sum;
    for(int i=0;i<n;i++){
        rsum=rsum-arr[i];
        if(lsum == rsum)
        return i+1;

        
        lsum =lsum+arr[i];
    }
    return -1;

}

int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    int result=equbilirium(arr,9);
    cout<<result;
    return 0;
}