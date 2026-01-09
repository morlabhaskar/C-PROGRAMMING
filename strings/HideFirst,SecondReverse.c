//WAP to Hide First Occurance,Reverse Second Occurance SubStrings in a given String
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],*ptr=NULL,sub[30],temp[30];
    int cnt=0,i=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);//ananighnanidfnani
    printf("Enter a Sub String :\n");
    fgets(sub,sizeof(sub),stdin);//nani
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    if(sub[strlen(sub)-1]=='\n') sub[strlen(sub)-1]='\0';
    for(int j=strlen(sub)-1;j>=0;j--){  //inan
        temp[i++]=sub[j];
    }
    temp[i] = '\0';
    printf("temp = \"%s\"\n",temp);
    ptr=str;
    while((ptr=strstr(ptr,sub))!=NULL){
        if(cnt%2==0){
            memset(ptr,'*',strlen(sub));
            ptr = ptr+strlen(sub);
        }
        else{
            strncpy(ptr,temp,strlen(sub));
            ptr = ptr+strlen(sub);
        }
        cnt++;
    }
    printf("%s\n",str);//ananighinandfnani
}
