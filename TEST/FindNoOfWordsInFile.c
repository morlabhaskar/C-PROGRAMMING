//WAP to find number of words count in given file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fptr=NULL;
    char str[100],temp[100],*ptr=NULL;
    fptr=fopen("dest.txt","r");
    if(fptr==NULL){
        printf("File Not Opened!\n");
        exit(0);
    }
    int cnt=0;
    while(fgets(str,sizeof(str),fptr)){
        str[strlen(str)-1]='\0';
        strcpy(temp,str);
        ptr=temp;
        ptr=strtok(ptr," ");
        while(ptr!=NULL){
            cnt++;
            ptr=strtok(NULL," ");
        }
        printf("%s\n",str);
    }
    printf("Word Count in File is : %d\n",cnt);
    fclose(fptr);
}