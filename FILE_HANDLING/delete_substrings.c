#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
void *readFromFile(char *filename){
    char (*p)[100]=NULL;
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("File not opened\n");
        exit(0);
    }
    char str[100];
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,(cnt+1)*100);
        strcpy(p[cnt],str);
        cnt++;
    }
    fclose(fptr);
    return p;
}
void *delete_substrings(char (*p)[100],char *sub){
    char *ptr=NULL;
    for(int i=0;i<cnt;i++){
        ptr=p[i];
        while((ptr=strstr(ptr,sub))!=NULL){
            memmove(ptr,ptr+strlen(sub),strlen(ptr+strlen(sub))+1);
        }
    }
    return p;
}
void writeToFile(char (*p)[100],char *filename){
    FILE *fptr=NULL;
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("File not opened\n");
        exit(0);
    }
    for(int i=0;i<cnt;i++){
        fputs(p[i],fptr);
    }
    fclose(fptr);
}
//./a.out  filename  substring
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=delete_substrings(lines,argv[2]);
    writeToFile(lines,argv[1]);

}
/*
abcdkubcdthbcdk
kbcdyjbcd
kljbcdrbcd

akuthk
kyj
kljr
*/