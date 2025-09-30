#include<iostream>
using namespace std;
void generate(int index,string input, string output,string map[]){
    if(index==input.size()){
        cout<<output<<" ";
        return;
    }
    int x= input[index]-'0';
    string val =map[x];
    if(val.size()==0) generate(index+1,input, output,map);
    else{
        for (int i =0;i<val.size();i++){
            generate(index+1, input, output+val[i],map);
        }
    }

}
int main(){

    string map[]={    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string input;
    cin>>input;
    string output="";
    generate(0,input,output,map);
    return 0;




}