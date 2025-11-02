#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//a.exe  filename  substring
int main(int argc,char *argv[]){
    FILE *fptr;
    char str[100],*ptr=NULL;
    fptr = fopen(argv[1],"r+");
    while(fgets(str,sizeof(str),fptr)){
        int count=0;
        ptr=str;
        while((ptr=strstr(ptr,argv[2]))!=NULL){
            if(count==0){
                memset(ptr,'*',strlen(argv[2]));
                ptr=ptr+strlen(argv[2]);
            }
            else{
                char *left=ptr,*right=ptr+(strlen(argv[2])-1);
                while(left<right){
                    if((*left)!=(*right)){
                        char temp=*left;
                        *left=*right;
                        *right=temp;
                    }
                    left++;
                    right--;
                }
            }
            count++;
            fseek(fptr,-strlen(str),SEEK_CUR);
            fputs(str,fptr);
        }
    }
    fclose(fptr);
}
/*
habchkabcygabc
htabckjabcthabc
thabcjkabc

h***hkcbaygcba
ht***kjcbathcba
th***jkcba

*/