//WAP to Hide First Occurance substring,Reversse second, and Remove Remains Substrings in a given string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],sub[10],temp[30];
    char *ptr = NULL;
    int cnt=0,i=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);//abcdrgbcdkgtbcdyhbcd

    printf("Enter a SubString :\n");
    fgets(sub,sizeof(sub),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    if(sub[strlen(sub)-1] == '\n') sub[strlen(sub)-1] = '\0';
    
    ptr=str;
    for(int j=strlen(sub)-1;j>=0;j--){
        temp[i++] = sub[j];
    }
    printf("temp = \"%s\"\n",temp);
    while((ptr=strstr(ptr,sub))!=NULL){
        cnt++;
        if(cnt==1){
            memset(ptr,'*',strlen(sub));
            ptr=ptr+strlen(sub);
        }
        else if(cnt==2){
            strncpy(ptr,temp,strlen(sub));
            ptr=ptr+strlen(sub);
        }
        else{
            memmove(ptr,ptr+strlen(sub),strlen(ptr+strlen(sub))+1);
        }
        
    }
    printf("%s\n",str);
}