#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isAlpha(char ch){
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)) return 1;
    return 0;
}
int isLower(int ch){
    if(ch>=97 && ch<=122) return 1;
    return 0;
}
int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Invalid command line arguments\n");
    }
    FILE *fptr=fopen(argv[1],"r+");
    char str[100];
    if(fptr==NULL){
        printf("File Not Open\n");
        exit(0);
    }
    while(fgets(str,sizeof(str),fptr)){
        for(int i=0;i<strlen(str);i++){
            if(isAlpha(str[i])){
                if(isLower(str[i])){
                    str[i]=str[i]-32;
                }
                else{
                    str[i]=str[i]+32;
                }
            }
        }
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(str,fptr);
    }
    fclose(fptr);
}
/*
Bhaskar Morla
Ravi Morla

bHASKAR mORLA
rAVI mORLA
*/