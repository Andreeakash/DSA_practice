#include<bits/stdc++.h>
using namespace std;
int subsequesne(string input,string output[]){
    if(input.size()==0) {
        output[0]="";
        return 1;

    }
    else{
        int  smallsize = subsequesne(input.substr(1),output);
        for(int i = 0;i<smallsize;i++){
            output[i+smallsize]=input[0]+output[i];

        }
        return 2*smallsize;
    }
}
int main(){
    string input;
    cout<<"Enter the string :";
    cin>>input;
    string *output=new string[1001];

    int count=subsequesne(input,output);
    cout<<count;
    for(int i=0;i<count;i++){
       cout<<output[i]<<" "<<endl;}
    return 0;
}