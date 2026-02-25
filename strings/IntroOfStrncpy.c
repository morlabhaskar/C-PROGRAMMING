#include<stdio.h>
#include<string.h>
char *my_strncpy(char *dest,const char *src,int n){
    int i=0;
    for(;src[i]!='\0'&&i<n;i++){
        dest[i]=src[i];
    }
    for(;i<n;i++){
        dest[i]='\0';
    }
    return dest;
}
int main(){
    char src[100];
    char dest[100];
    printf("Enter the String :\n");
    fgets(src,sizeof(src),stdin);
    src[strlen(src)-1]='\0';
    my_strncpy(dest,src,5);
    printf("Source : %s\n",src);
    printf("Destination : %s\n",dest);
}