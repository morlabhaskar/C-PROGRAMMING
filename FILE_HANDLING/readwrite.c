#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
void *readFromFile(char *filename){
    FILE *fptr=NULL;
    char (*p)[100]=NULL;
    fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("File Not Opened\n");
        exit(0);
    }
    char str[100];
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,(cnt+1)*sizeof(*p));
        strcpy(p[cnt],str);
        cnt++;
    }
    fclose(fptr);
    return p;
}
void writeToFile(char *filename,char (*p)[100]){
    FILE *fptr=NULL;
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("File is Not Opened\n");
        exit(0);
    }
    for(int i=0;i<cnt;i++){
        fputs(p[i],fptr);
    }
    fclose(fptr);
}
int main(int argc,char *argv[]){
    if(argc!=2){
        printf("Invalid command line arg\n");
        return 0;
    }
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    printf("File Content is :\n");
    for(int i=0;i<cnt;i++){
        printf("%s",lines[i]);
    }
    writeToFile(argv[1],lines);
    return 0;
}