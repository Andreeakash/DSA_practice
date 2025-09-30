#include<stdio.h>
#include<conio.h>
int own_strlen(const char *src){
    int cnt=0;
    while(*src!='\0'){
        cnt++,src++;
    }
    return cnt;
}
void myReverse(char str[]) {
    int n = own_strlen(str);
    int start = 0, end = n - 1;

    while (start < end) {
        // swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main(){
    char str1[10]="Aman";
    char str2[20]="Akash";
    
    puts(str1);
    puts(str2);
    printf("the length of %s is %d",str1,own_strlen(str1));
    printf("the length of %s is %d",str2,own_strlen(str2));



    myReverse(str1);
    myReverse(str2);

    puts(str1);
    puts(str2);
   
    
}