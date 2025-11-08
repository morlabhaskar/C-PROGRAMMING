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
void *removeNonVowels(char (*p)[100]){
    for(int i=0;i<cnt;i++){
        for(int j=0;p[i][j];j++){
                char *ptr=NULL;
            if((is_vowel(p[i][j])==0)&&((p[i][j]!=' '))&&((p[i][j]!='\n'))){
                ptr=&p[i][j];
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                j--;
            }
            ptr=NULL;
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
//./a.out  filename
int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Invalid command line arguments\n");
        exit(0);
    }
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=removeNonVowels(lines);
    writeToFile(lines,argv[1]);
}

/*
bhaskar../ nani ,,,,
morla ./;ravi,.7

aa ai 
oa ai
*/


