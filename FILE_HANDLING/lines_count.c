#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count = 0;
    FILE *fptr = NULL;
    fptr = fopen("dest.txt","r");
    while(fgets(str,sizeof(str),fptr)){
        count += strlen(str)-1;
    }
    printf("%d\n",count);
}