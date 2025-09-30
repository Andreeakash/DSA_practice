#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str1[10]="pankaj";
    char str2[10]="sharma";
    puts(str1);
    puts(str2);
    strcpy(str2+2,str1);
    puts(str1);
    puts(str2);
}