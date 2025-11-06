#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse_string(char *ptr){
    char *left=ptr,*right=ptr+strlen(ptr)-2;
    while(left<right){
        if((*left)!=(*right)){
            char temp=*left;
            *left=*right;
            *right=temp;
        }
        left++;
        right--;
    }
}
void hide_alt_char(char *ptr){
    int count=0;
    for(int i=0;ptr[i];i++){
        if((count%2==1)&&(*(ptr+i)!='\n')){
            memset(ptr+i,'*',1);
        }
        count++;
    }
}
//./a.out  filename
int main(int argc,char *argv[]){
    FILE *fptr=NULL;
    fptr=fopen(argv[1],"r+");
    if(fptr==NULL){
        printf("file is not opened!\n");
        exit(0);
    }
    char str[100];
    while(fgets(str,sizeof(str),fptr)){
        reverse_string(str);
        hide_alt_char(str);
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
}