#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
void *readFromFile(char *filename){
    FILE *fptr=fopen(filename,"r");
    if(fptr==NULL){
        printf("File is Not opened!");
        exit(0);
    }
    char (*p)[100]=NULL,str[100];
    while(fgets(str,sizeof(str),fptr)){
        p=realloc(p,(count+1)*sizeof(*p));
        strcpy(p[count],str);
        count++;
    }
    fclose(fptr);
    return p;

}
void *reverseLines(char (*lines)[100]){
    char (*left)[100]=lines,(*right)[100]=lines+count-1;
    while(left<right){
        char temp[100];
        strcpy(temp,(*left));
        strcpy((*left),(*right));
        strcpy((*right),temp);
        left++;
        right--;
    }
    return lines;
}
void writeToFile(char (*lines)[100],char *filename){
    FILE *fptr=fopen(filename,"w");
    if (!fptr) {
        printf("Unable to open %s for writing.\n", filename);
        return;
    }
    for(int i=0;i<count;i++){
        fputs(lines[i],fptr);
    }
    fclose(fptr);
}
int main(int argc,char *argv[]){
    if(argc!=2){
        printf("Invalid Command line arguments!");
        exit(0);
    }
    char (*lines)[100]=NULL;
    lines=readFromFile(argv[1]);
    lines=reverseLines(lines);
    writeToFile(lines,argv[1]);
}