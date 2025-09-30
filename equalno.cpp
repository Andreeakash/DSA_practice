#include<iostream>
#include<vector>
#include<string>
void generatesamenum(std::string abtak, int first,int second,std::vector<std::string>&v){
    if(first==0 && second==0){
        v.push_back(abtak);
        return;
    }
    if(first<0||second<0) return;
    generatesamenum(abtak+'a',first-1,second,v);
    generatesamenum(abtak+'b',first,second-1,v);

}

int main(){
    std::vector<std::string>v;
    int number;
    std::cout<<"enter the number :";
    std::cin>>number;
    generatesamenum("",number, number,v);
     int cnt=0;
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
        cnt++;
    }
    std::cout<<std::endl;
    std::cout<<cnt<<std::endl;
    std::cout<<v.size();
    return 0;
}