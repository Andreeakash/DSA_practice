#include<bits/stdc++.h>
using namespace std;
void subsequence( string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return ;
    } 
    else{
        subsequence(input.substr(1),output+input[0]);
        subsequence(input.substr(1),output);
    }
   

}
void sub(int index, string input, string output){
    if(index==input.size()){
        cout<<output<<endl;
        return;
    }
    else{
        sub(index+1,input,output+input[index]);
        sub(index+1, input, output);
    }





}
int main(){
    // string input;
    // cin>>input;
    // subsequence(input,"");

    string input;
    cin>>input;
    string output="";
    sub(0,input,output);
    cout<<output.size();
    
    return 0;
}