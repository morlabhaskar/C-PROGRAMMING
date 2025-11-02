#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//./a.out   filename
void reverse_word(char *p){
    char *left=p,*right=p+strlen(p)-1;
    while(left<right){
        if((*right)=='\n'){
            right--;
        }
        if((*left)!=(*right)){
            char temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++){
        if(ptr[i]=='\0'){
            ptr[i]=' ';
        }
    }
}
int main(int argc,char *argv[]){
    FILE *fptr=NULL;
    char str[100],*ptr=NULL;
    fptr=fopen(argv[1],"r+");
    if(fptr==NULL){
        printf("File Not Opened!");
        exit(0);
    }
    while(fgets(str,sizeof(str),fptr)){
        ptr=str;
        int len=strlen(str);
        ptr=strtok(ptr," ");
        while(ptr != NULL){
            // printf("%s  %d\n",ptr,strlen(ptr));
            reverse_word(ptr);
            ptr=strtok(NULL," ");
        }
        replace_null_with_space(str,len);
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
}
/*
morla bhaskar nani
morla ravi kumar

alrom raksahb inan
alrom ivar ramuk
*/