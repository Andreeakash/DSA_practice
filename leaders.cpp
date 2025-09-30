#include<bits/stdc++.h>
using namespace std;
void leaders(int n,int arr[], vector<int>&ans){
int maxi=INT_MIN;
    for(int i=n-1;i>0;i--){
        
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
           
        }
        

    }
    
}
int main(){
    int arr[6]={16,17,4,3,5,2};
    vector<int>ans;
    leaders(6,arr,ans);
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(auto i:ans){
        cout<<i<<" ";

    }
    return 0;

}