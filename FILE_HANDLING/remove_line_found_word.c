#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
void *readFromFile(char *filename){
    FILE *fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("file is not opened");
        exit(0);
    }
    char (*p)[100]=NULL,str[100];
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,(cnt+1)*sizeof(*p));
        strcpy(p[cnt],str);
        cnt++;
    }
    fclose(fptr);
    return p;
}
void *removeLineWordFound(char (*p)[100],char *word){
    for(int i=0;i<cnt;i++){
        char *ptr=p[i];
        if(strstr(ptr,word)){
            memmove(ptr,ptr+strlen(p[i]),strlen(ptr+strlen(p[i]))+1);
            i--;
        } 
    }
    return p;
}
void writeToFile(char (*p)[100],char *filename){
    if(cnt==0){
        printf("Data is Empty");
        return;
    }
    FILE *fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("file is Not opened"); 
        exit(0);
    }
    for(int i=0;i<cnt;i++){
        fputs(p[i],fptr);
    }
    fclose(fptr);
}
//./a.out   filename  word
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=removeLineWordFound(lines,argv[2]);
    writeToFile(lines,argv[1]);
}
/*
ravi kumar
bhaskar nani g
raj kumar

ravi kumar
raj kumar

*/