#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int isVowel(char ch){
    ch=tolower(ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Invalid command line arguments\n");
    }
    FILE *fptr=fopen(argv[1],"r");
    char str[100];
    int count=0;
    if(fptr==NULL){
        printf("File Not Open\n");
        exit(0);
    }
    while(fgets(str,sizeof(str),fptr)){
        for(int i=0;i<strlen(str);i++){
            if(isVowel(str[i])){
                count++;
            }
        }
    }fclose(fptr);
    printf("Vowels Count : %d",count);
}