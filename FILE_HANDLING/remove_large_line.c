#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0,large=0;
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
void *removeLargeLine(char (*p)[100]){
    for(int i=0;i<cnt;i++){
        if(strlen(p[i])>large) large=strlen(p[i]);
    }
    for(int i=0;i<cnt;i++){
        if(strlen(p[i])==large){
            char *ptr=p[i];
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
//./a.out   filename
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=removeLargeLine(lines);
    writeToFile(lines,argv[1]);
}
/*

*/