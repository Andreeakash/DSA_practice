#include<iostream>
#include<vector>
using namespace std;
void merge_two_sorted(int i,int j,int n, int m, int arr1[],int arr2[],vector<int>&v){
    if(n==0 && m==0){
        return;
    }
    if(arr1[i]>arr2[j]){
        v.push_back(arr2[j]);
        merge_two_sorted(i,j,n,m,arr1,arr2+1,v);
    }
    else if(arr1[i]<arr2[j]){
        v.push_back(arr1[i]);
        merge_two_sorted(i,j,n,m,arr1+1,arr2,v);
    }
    else{
        if(n==0){
            for(int i=0;i<m;i++){
                v.push_back(arr2[i]);
            }
        }
        for(int i=0;i<n;i++){
            v.push_back(arr1[i]);
        }
    }
}
int main(){
    int arr1[]={1,3,6,8};
    int arr2[]={2,4,5,7,10,12,14};
    vector<int>v;
    int n =sizeof(arr1)/sizeof(arr1[0]);
    int m =sizeof(arr2)/sizeof(arr2[0]);
    merge_two_sorted(0,0, n, m,arr1,arr2,v);
    for(auto i :v){
        cout<<i<<" ";
    }
    return 0;

}