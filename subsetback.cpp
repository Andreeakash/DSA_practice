#include<iostream>
#include<array>
#include<vector>
using namespace std;
void subset(int index, int n, int arr[], vector<int>curr, vector<vector<int>>&ans){
    if(index==n){
        ans.push_back(curr);
        return;
    }
    curr.push_back(arr[index]);
    subset(index+1,n,arr,curr,ans);
    curr.pop_back();
    subset(index+1,n,arr,curr,ans);
    

}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int *arr=new int [n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    vector<vector<int>>ans;
    subset(0,n,arr,v,ans);
    for(auto inc:ans){
        cout<<"[";
        for(auto c:inc){
            cout<<" "<<c<<" ";
        }
        cout<<"]";
    }

}