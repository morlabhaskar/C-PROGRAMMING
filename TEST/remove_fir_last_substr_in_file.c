#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;//3
void *readFromFile(char *filename){
    char (*p)[100]=NULL;
    FILE *fptr=NULL;
    fptr=fopen(filename,"r");//fptr=fopen("dest.txt","r");
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
        int count=0,c=0;
        ptr=p[i];
        while((ptr=strstr(ptr,sub))!=NULL){
            count++;
            ptr=ptr+strlen(sub);
        }
        ptr=p[i];
        while((ptr=strstr(ptr,sub))!=NULL){
            if((c==0)||(c==count-1)){
                memmove(ptr,ptr+strlen(sub),strlen(ptr+strlen(sub))+1);
            }
            else {
                ptr += strlen(sub);
            }
            c++;
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
// char argv={".\a.out","dest.txt","india"}
//   argv[0]      argv[1]   argv[2]
//   ./a.out      filename  substring
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;//char *lines[][100]
    lines=readFromFile(argv[1]);
    lines=delete_substrings(lines,argv[2]);
    writeToFile(lines,argv[1]);
}

/*
india@is my country@india
@is my india@india@country@india
is india my india@india@india@country@india

@is my country@
@is my @india@country@
is  my india@india@india@country@
*/
