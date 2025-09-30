#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Hello");
    char * arr[]={
        "welcome","to ","MY","House"
    };
    execv("b.out",arr);
    printf("I am the man who can destroy the world in terms of knowledge , innovaction and developement");
    return 0;
}