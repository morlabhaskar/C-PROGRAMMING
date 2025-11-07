#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
int is_vowel(char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
//./a.out  filename
int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Invalid command line arguments!\n");
        exit(0);
    }
    FILE *fptr=NULL;
    char str[100],*p=NULL,*ptr=NULL;
    fptr=fopen(argv[1],"r+");
    if(fptr==NULL){
        printf("File is Not Opened\n");
        exit(0);
    }
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,sizeof(str));
        strcpy(p,str);
        for(int i=0;p[i];i++){
            if(is_vowel(p[i])){
                ptr=&p[i];
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                i--;
            }
        }
        fseek(fptr,-strlen(p),SEEK_CUR);
        fputs(p,fptr);
    }
    fclose(fptr);
}

/*
bhaskar nani
ravi morla

bhskr nn
rv mrl
*/
