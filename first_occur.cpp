#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int occurance(int n, int key,int arr[] ){
    int st=0;int end=n-1;
    int answer=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            answer=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        st=mid+1;
        else
        end=mid-1;
        


    }
    return answer;
}
int main(){

    int arr[]={1,3,3,3,3,4,5,6,6,6};
    int key =6;
    int n=10;
    int result=occurance(n,key,arr);
    cout<<result;
    return 0;


}