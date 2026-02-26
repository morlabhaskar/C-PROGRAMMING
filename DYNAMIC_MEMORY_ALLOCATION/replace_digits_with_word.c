#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *getString(){
    int i=0;
    char *ptr=NULL;
    do{
        ptr=realloc(ptr,(i+1)*sizeof(char));
        ptr[i]=getchar();
    }while(ptr[i++]!='\n');
    ptr[i-1]='\0';
    return ptr;
}
char *replaceDigitsWithWord(char *ptr){
    char *digits[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i=0,l,size,index;
    while(ptr[i]){
        if(ptr[i]>='0' && ptr[i]<='9'){
            index=ptr[i]-48;
            size=strlen(ptr);
            l=strlen(digits[index])+1;//extra one for space after digit
            ptr=realloc(ptr,size+l);
            memmove(ptr+i+l,ptr+i+1,strlen(ptr+i+1)+1);
            strncpy(ptr+i,digits[index],l);
            i+=l;
            ptr[i-1]=' ';
            continue;
        }
        i++;
    }
    return ptr;
}
int main(){
    char *str=NULL;
    str=getString();
    printf("%s\n",str);
    str=replaceDigitsWithWord(str);
    printf("%s\n",str);
}