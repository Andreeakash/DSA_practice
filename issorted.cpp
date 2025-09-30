#include<iostream>
using namespace std;
bool isSorted(int size, int arr[]){
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(size-1,arr+1);
}
int main(){
    int arr[]={2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
   
    // // if(isSorted(n,arr))
    // cout<<"The array is sorted"<<endl;
    // // else
    //     cout<<"the array is not Sorted"<<endl;
    
    return 0;

}