#include<iostream>
using namespace std;
    int maxSubArray(int nums[],int n) {
        int over_sum=nums[0];
        int curr_sum=nums[0];
        for(int i =1;i<n;i++){
            if(curr_sum>=0){
                curr_sum +=nums[i];
                over_sum=max(over_sum,curr_sum);
            }
            else{
                curr_sum =nums[i];
                over_sum=max(curr_sum,over_sum);
            }
        }
        return over_sum;
        
    }
int main(){
    int n;
    cin>>n;
    int * nums=new int[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result =maxSubArray(nums,n);
    cout<<result;
}
