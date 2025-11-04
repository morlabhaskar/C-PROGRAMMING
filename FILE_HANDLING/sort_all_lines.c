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
void *sortAllLines(char (*lines)[100]){
    for(int i=cnt-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(strcmp(lines[j],lines[j+1])>0){
                char temp[100];
                strcpy(temp,lines[j]);
                strcpy(lines[j],lines[j+1]);
                strcpy(lines[j+1],temp);
            }
        }
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
    lines=sortAllLines(lines);
    writeToFile(lines,argv[1]);
    free(lines);
}

/*
morla
bhaskar 
abhi

abhi
bhaskar
morla
*/