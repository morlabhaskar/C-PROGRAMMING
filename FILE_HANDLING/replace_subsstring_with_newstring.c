#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//a.out  filename  substring   newstring
int main(int argc,char *argv[]){
    if (argc != 4) {
        printf("Usage: %s <filename> <old> <new>\n", argv[0]);
        exit(0);
    }
    FILE *fptr=NULL;
    char str[100],*ptr=NULL,*buf=NULL;
    fptr=fopen(argv[1],"r+");
    if (!fptr) {
        perror("Error opening file");
        exit(0);
    }
    int l1=strlen(argv[2]),l2=strlen(argv[3]);
    while(fgets(str,sizeof(str),fptr)){
        buf=malloc(strlen(str)+1);
        strcpy(buf, str);
        ptr=buf;
        while((ptr=strstr(ptr,argv[2]))){
            int i=ptr-buf;
            if(l2>l1){
                buf=realloc(buf,strlen(buf)+1+l2-l1);
                if(ptr != buf+i){
                    ptr=buf+i;
                }
                memmove(ptr+l2,ptr+l1,strlen(ptr+l1)+1);
            }
            strncpy(ptr,argv[3],l2);
            ptr=ptr+l2;
        }
        fseek(fptr,-strlen(str),SEEK_CUR);
        fputs(buf,fptr);
        free(buf);
    }
    fclose(fptr);
}
/*
abcdjhabcdss
kjiabcdhrbcdkl

abhaskarjhabhaskarss
rbhaskarkl
*/