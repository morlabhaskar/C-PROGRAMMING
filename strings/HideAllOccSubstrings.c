//WAP to Hide all Occurance substring in a given string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[30],sub[10];
    char *ptr = NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter a SubString :\n");
    fgets(sub,sizeof(sub),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    if(sub[strlen(sub)-1] == '\n') sub[strlen(sub)-1] = '\0';
    
    ptr=str;
    // ptr = strstr(ptr,sub);
    printf("%s\n",str);
    while((ptr = strstr(ptr,sub))!=NULL){
        memset(ptr,'*',strlen(sub));
        ptr = ptr+strlen(sub);
    }
    printf("%s\n",str);
}


/*Enter a String :
    nanighdhdsnani
Enter a SubString :
    nani
nanighdhdsnani
o/p : ****ghdhds*****/