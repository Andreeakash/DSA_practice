#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 2,2};
    int n = arr.size();
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0]=arr[0];
    suffix[n-1]=arr[n-1];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+arr[i];
    }
    

   for(int i=0;i<n;i++){
       if(prefix[i]==suffix[i]){
           cout<<i<<endl;
       }
   }
}
