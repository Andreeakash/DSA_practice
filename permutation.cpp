#include<iostream>
#include<vector>
using namespace std;
void permute (int index,string input, vector<string> &ans){
    if(index==input.size()){
        ans.push_back(input);
        return;
    }
    for(int j= index;j<input.size();j++){
        swap(input[index],input[j]);
        permute(index+1,input,ans);
        swap(input[index],input[j]);
    }
}
int main(){
    vector<string>ans;
    string input;
    cout<<"Enter the string :";
    cin>>input;
    
    permute(0,input,ans);
    int cnt=0;
    for(auto ins:ans){
        cout<<ins<<" ";
        cnt++;

    }
    cout<<cnt;
    
    return 0;
}