//WAP to find substrings in a given string both forward and reverse
#include<stdio.h>
#include<string.h>
void reverse(char *ptr){
    int len=strlen(ptr);
    char *left=ptr,*right=ptr+len-1;
    while(left<right){
        if(*left!=*right){
            int temp=*left;
            *left=*right;
            *right=temp;
        }
        left++;
        right--;
    }
}
int main(){
    char str[]="SVECTORABCROTCEVJKGVECTOR";
    char sub[]="VECTOR";
    char rev[50],*ptr=NULL;
    int count=0;
    strcpy(rev,sub);
    reverse(rev);
    ptr=str;
    while((ptr=strstr(ptr,sub))){
        count++;
        ptr=ptr+strlen(sub);
    }
    ptr=str;
    while((ptr=strstr(ptr,rev))){
        count++;
        ptr=ptr+strlen(rev);
    }
    printf("Count=%d\n",count);
}