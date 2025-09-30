#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int sum =0;
        int a, b;
        cin>>a>>b;
        
        for(int i=a;i<=b;i++){
            sum=sum+arr[i];
        }
        cout<<sum;
    }
    return 0;
    
}
