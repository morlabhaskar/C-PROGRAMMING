#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
    if(argc != 3){
        printf("Invalid Command Line Arguments\n");
        printf("<./a.out>  <substring>   <filename>\n");
        exit(0);
    }
    char str[100];
    FILE *fptr = NULL;
    fptr = fopen(argv[2],"r");
    while(fgets(str,sizeof(str),fptr)){
        char *ptr=str;
        if(strstr(ptr,argv[1])){
            printf("%s\n",str);
        }
    }
}