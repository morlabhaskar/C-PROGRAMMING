#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//./a.out   filename
int main(int argc,char *argv[]){
    FILE *fptr=NULL;
    fptr=fopen(argv[1],"r+");
    if(fptr==NULL){
        printf("file is Not opened!\n");
        exit(0);
    }
    char str[100];
    while(fgets(str,sizeof(str),fptr)){
        for(int i=0;str[i];i++){
            if(str[i]!='\n'){
                str[i]=str[i]+3;
            }
        }
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
}