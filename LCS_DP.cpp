#include<iostream>
using namespace std;
#include<bits/stdc++.h>



class Solution {
public:
int solve(string &a,string &b,int i,int j,vector<vector<int>>&dp){
    if(i==a.size()||j==b.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
    if(a[i]==b[j]){
        ans=1+solve(a,b,i+1,j+1,dp);
    }
    else{
        ans=max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
    }

    return dp[i][j]=ans;
}
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        return solve(text1,text2,0,0,dp);
    }
};
int main() {
    Solution obj;
    string str1 = "abcd";
    string str2 = "mad";
    
    int result = obj.longestCommonSubsequence(str1, str2);
    cout << "Length of Longest Common Subsequence: " << result << endl;
    
    return 0;
}