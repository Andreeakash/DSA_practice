#include<bits/stdc++.h>
using namespace std;
void removedup(char input[]){
    int l = strlen(input);
    if(l==0||l==1) return;
    else if(input[0]==input[1]){
            // for(int i =0; i<l;i++){
            //     input[i]=input[i+1];
            // }
            for(int i=1;i<=l;i++){
                input[i-1]= input[i];
            }
            removedup(input);

        }
    
    else{
        removedup(input+1);
    }
};
int main(){
    char input[1001];
    cout<<"Enter the string :";
    cin>>input;
    removedup(input);
    cout<<input;
}
