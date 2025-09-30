#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permute(int index, string s,string temp, vector<string>&ans){
      if(index==s.size()){
          ans.push_back(temp);
          return;
      }
      permute(index+1,s,temp+s[index],ans);
      if(index!=s.size()-1){
          permute(index+1,s,temp+s[index]+" ",ans);
      }
      return;
      
      
      
}
int main(){
    string s ="ABC";
    string temp="";
    vector<string>ans;
    permute(0,s,temp,ans);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}