//int strcmp(const char *s1, const char *s2);
//The  strcmp()  function  compares the two strings s1 and s2. It returns an integer less than, equal to, or greater 
//than zero if s1 is found, respectively, to be  less than, to match, or be greater than s2.
//22-09-2025

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strcmp(const char *s1,const char *s2){
    while(*s1 && (*s1==*s2)){
        s1++;
        s2++;
    }
    int x = *s1 - *s2;
    if(x>0) return 1;
    else if(x<0) return -1;
    else return 0;
}
char *getString(){
    int i=0;
    char *ptr=NULL;
    do{
        ptr=realloc(ptr,(i+1)*sizeof(char));
        ptr[i]=getchar();
    }while(ptr[i++]!='\n');
    ptr[i-1]='\0';
    return ptr;
}
int main(){
    // char *str=NULL;
    // printf("Enter a String :\n");
    // str=getString();
    // printf("String is %s.\n",str);
    char str1[20]="abc";
    char str2[20]="xyz";
    char str3[20]="lmn";
    char str4[20]="ijk";
    char str5[20]="abc";
    char str6[20]="abc";
    
    // printf("%d\n",strcmp(str1,str2));//-1
    // printf("%d\n",strcmp(str3,str4));//1
    // printf("%d\n",strcmp(str5,str6));//0

    printf("%d\n",my_strcmp(str1,str2));//-1
    printf("%d\n",my_strcmp(str3,str4));//1
    printf("%d\n",my_strcmp(str5,str6));//0
}