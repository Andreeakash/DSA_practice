#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int * ptr= new int[n];
//     for(int i=0;i<n;i++){
//         cin>>ptr[i];
//     }
//     sort(ptr, ptr+n);
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }
//     cout<<endl;
//     int *ret= lower_bound(ptr,ptr+n,3);
//     cout<< *ret;

//     return 0;
// }
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(), ans.end());
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    auto  it= lower_bound(ans.begin(), ans.end(),23);
    cout<< *it;

    return 0;
}