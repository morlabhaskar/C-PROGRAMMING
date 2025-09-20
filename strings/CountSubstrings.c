//WAP to Count the Occurance SubStrings in a given string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],sub[10];
    char *ptr = NULL;
    int cntSubstrings=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter a SubString :\n");
    fgets(sub,sizeof(sub),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    if(sub[strlen(sub)-1] == '\n'){
        sub[strlen(sub)-1] = '\0';
    }
    ptr=str;
    while((ptr=strstr(ptr,sub))!=NULL){
        cntSubstrings++;
        ptr=ptr+strlen(sub);
    }
    printf("%s\n",str);
    printf("No of SubStrings is %d\n",cntSubstrings);
}