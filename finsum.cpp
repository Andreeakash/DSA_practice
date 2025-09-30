#include<iostream>
using namespace std;
int findsum(int i,int n,int arr[  ]){
    int sum =0;
    if(i==n){
        return 0;
    }
    else{
        sum=arr[i]+findsum(i+1,n,arr);
        return sum;
    }
};
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    findsum(0,n,arr); // This line is not necessary for output
    cout<<findsum(0,6,arr)<<endl; // Output: 21
    return 0;

}