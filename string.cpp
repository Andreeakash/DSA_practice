#include<bits/stdc++.h>
using namespace std;
int main(){
    // string * ptr = new string;
    // * ptr = "Andree";
    // cout<<"The address of ptr pointer:"<<ptr<<endl;
    // cout<<"The content of Ptr pointer:"<< * ptr<<endl;
    // *ptr = "akash";
    // cout<<"The new content of Ptr pointer:"<<*ptr<<endl;
    // cin>>*ptr;
    // getline(cin,*ptr);
    // cout<<*ptr;
    // string s;
    // getline(cin,s);
    // s[14]='D';
    // cout<<s<<endl;


    // string s1="Andree";
    // string s2="Akash";
    // string s3="aman";
    // s3= '1'+s2+s3;
    // cout<<"The original string is this :"<<s3;

    string * ptr = new string[10];
    cin>>*ptr;
    ptr[3]="A";
    cout<<*ptr<<endl;


    return 0;


}
