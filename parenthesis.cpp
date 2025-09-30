#include<iostream>
#include<vector>
#include<string>
// #include<bits/stdc++.h>
void validparenthesis(std::string abtak,int open , int close, std::vector<std::string>&v){
    if(open==0 && close ==0){
        v.push_back(abtak);
        return;
    }
    if(open>0){
        validparenthesis(abtak+'(',open-1,close,v);
    }
    if(open<close && close>0){
        validparenthesis(abtak+')',open, close-1,v);
    }
}

int main(){
    std:: vector<std::string>v;
    int n;
    std:: cout<<"Enter the N  value :";
    std:: cin>>n;
    validparenthesis("",n , n, v);
    int cnt=0;
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
        cnt++;
    }
    std::cout<<std::endl;
    std::cout<<cnt<<std::endl;
    return 0;

}