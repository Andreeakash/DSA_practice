#include<bits/stdc++.h>
using namespace std;
void replace(char input[],char s,char str[]){
    int l = strlen(input);
    if(l==0) return ;
    else if (input[0]==s){
        int l2 = strlen(str);
        for(int i = l;i>=0;i--){
            input[i+l2-1]=input[i];
        }
        for(int i =0; i<l2;i++){
            input[i]=str[i];

        }
        replace(input+l2,s,str);
    }
    else{
        replace(input+1,s, str);

    }
}
int main(){
    char input[100], str[12];
    char p;
    cout<<"enter the char which you want to remove your string :";
    cin>>p;

    cout<<"Enter the original string: ";
    cin>>input;
    cout<<"Enter the changable string :";
    cin>>str;
    replace(input,p,str);
    cout<<"The Modified string is :"<<input<<endl;
    return 0;




}