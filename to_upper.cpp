#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string capitalizeTitle(string title) {
        int n= title.length();
        for(int i =0;i<n;i++){
            if(title[i]>='A'&& title[i]<='Z'){
                title[i]+=32;
            }

        }
        // cout<<n;
        for(int i=0;i<n;i++){
           int start = i;
            while (i < n && title[i] != ' ') {
                i++;
            }
            cout<<i<<" ";
            
            int end = i - 1;
            int len = end - start + 1;

            // if word length >= 3 → capitalize first letter
            if (len >= 3) {
                if (title[start] >= 'a' && title[start] <= 'z') {
                    title[start] = title[start] - 32; // convert lowercase → uppercase
                }
            }
          

        }
        return title;
        
    }
};



int main(){
    // string str="i love sam samsung";
    string str="i am at my office";
    Solution s1;
    string result=s1.capitalizeTitle(str);
    cout<<result;
    return 0;
    
}