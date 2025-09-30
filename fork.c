#include<stdio.h>
#include<unistd.h>
int main(){
    int pid= fork();
    if(pid==0)
        printf("I am child ");
    else
        printf("I am parent ");
        return 0;
}