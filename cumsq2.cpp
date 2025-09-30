#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *pre=new int[n];
    for (int i=0;i<n;i++){
        if(i==0)
        pre[i]=arr[i];
        else
        pre[i]=pre[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int sum =0;
        int a,b;
        cin>>a>>b;
        sum=pre[b];
        if(a-1>=0){
            sum=sum-pre[a-1];
        }
        cout<<sum<<endl;
    
    }
    return 0;
    
}
