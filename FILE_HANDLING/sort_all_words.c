#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//./a.out   filename
void sort_word(char *p){
    for(int i=strlen(p)-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(p[j]>p[i]){
                char temp=p[j];
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++){
        if(ptr[i]=='\0') ptr[i]=' ';
    }
}
int main(int argc,char *argv[]){
    FILE *fptr=NULL;
    char str[100],*ptr=NULL;
    if(argc != 2){
        printf("Invalid command line arguments");
        exit(0);
    }
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
            int flag=0;
            if(ptr[strlen(ptr)-1]=='\n'){
                flag=1;
                ptr[strlen(ptr)-1]='~';
            }
            sort_word(ptr);
            if(flag) ptr[strlen(ptr)-1]='\n';
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

almor aabhkrs ainn
almor airv akmru
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
void *readFromFile(char *filename){
    FILE *fptr=fopen(filename,"r");
    char (*p)[100]=NULL,str[100];
    if(fptr==NULL){
        printf("File Not Opened!\n");
        exit(0);
    }
    while((fgets(str,sizeof(str),fptr))!=NULL){
        if(str[strlen(str)-1]!='\n') str[strlen(str)-1]='\n';
        p=realloc(p,(cnt+1)*sizeof(*p));
        strcpy(p[cnt],str);
        cnt++;
    }
    fclose(fptr);
    return p;
}
void sort_word(char *p){
    for(int i=strlen(p)-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(p[j]>p[i]){
                char temp=p[j];
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
}
void replace_null_with_space(char *ptr,int len){
    for(int i=0;i<len;i++){
        if(ptr[i]=='\0'){
            ptr[i]=' ';
        }
    }
}
void *sortAllWords(char (*lines)[100]){
        for(int i=0;i<cnt;i++){
                //char str[100];
                //strcpy(str,lines[i]);
               char *ptr=str;
                int len=strlen(str);
                ptr=strtok(ptr," ");
                while(ptr != NULL){
                   int flag=0;
                   if(ptr[strlen(ptr)-1]=='\n'){
                       flag=1;
                       ptr[strlen(ptr)-1]='~';
                   }
                   sort_word(ptr);
                   if(flag) ptr[strlen(ptr)-1]='\n';
                   ptr=strtok(NULL," ");
               }
               replace_null_with_space(str,len);
               strcpy(lines[i],str);
          }
        return lines;

}
void writeToFile(char (*lines)[100],char *filename){
    FILE *fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("File Not Opened!\n");
        exit(0);
    }
    for(int i=0;i<cnt;i++){
        fputs(lines[i],fptr);
    }
    fclose(fptr);
}
//./a.out  filename
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=sortAllWords(lines);
    writeToFile(lines,argv[1]);

}
*/