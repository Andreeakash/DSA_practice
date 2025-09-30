#include<iostream>
using namespace std;
int LCS(string num, string num2, int m , int n){
    if(m==0||n==0) return 0;

    if(num[m-1]==num2[n-1])
    return 1+LCS(num, num2,m-1,n-1);

    else
    return  max(LCS(num,num2,m-1,n),LCS(num,num2,m,n-1));

}



int main(){
    string name1="abcd";
    string name2="mad";
    int m =name1.length();
    int n =name2.length();
    cout<<LCS(name1,name2,m,n);

}