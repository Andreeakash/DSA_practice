#include<stdio.h>
#include<conio.h>
void mystrcpy(char *dest,const char *src){
    while(*src !='\0'){
        *dest=*src;
        dest++,src++;
    }
    *dest='\0';
}
int main(){
    char str1[10]="Aman";
    char str2[20]="Akash";
    puts(str1);
    puts(str2);
    mystrcpy(str1,str2);
    printf("\n");
    puts(str1);
    puts(str2);
}