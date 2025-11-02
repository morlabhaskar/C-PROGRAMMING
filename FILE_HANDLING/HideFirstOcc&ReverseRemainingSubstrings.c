//read line by line in file and hide first occurance substring and reverse remaining substrings
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//a.exe  filename  substring
void reverse_substring(char *ptr,char *sub){
    char *left=ptr,*right=ptr+(strlen(sub)-1);
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
void hide_substring(char *ptr,char *sub){
    memset(ptr,'*',strlen(sub));
    ptr=ptr+strlen(sub);
}
int main(int argc,char *argv[]){
    FILE *fptr;
    char str[100],*ptr=NULL;
    fptr = fopen(argv[1],"r+");
    while(fgets(str,sizeof(str),fptr)){
        int count=0;
        ptr=str;
        while((ptr=strstr(ptr,argv[2]))!=NULL){
            if(count==0){
                hide_substring(ptr,argv[2]);
            }
            else{
                reverse_substring(ptr,argv[2]); 
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