#include<bits/stdc++.h>
using namespace std;
void reverse(int input[],int size){
    if(size==0||size==1) return ;
    swap(input[0],input[size-1]);
    reverse(input+1,size-2);


};
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);

    for(int i =0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}