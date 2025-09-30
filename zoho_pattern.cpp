#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n =4;
    int num =1;
    for(int i=1;i<=n;i++){
        //space
        for(int j =1;j<=n-i;j++){
            cout<<"   ";
        }
        //print numbers
        for(int j =1;j<=n;j++){
            cout<<num<<"  ";
            num++;
        }

        //space 
        cout<<endl;

    }
    return 0;
}