#include<stdio.h>
#include<string.h>
int is_number(char ch){
    if(ch>='0' && ch<='9') return 1;
    return 0;
}
char *number_to_string(char ch){
    switch (ch){
        case '0':return "Zero";
        case '1':return "One";
        case '2':return "Two";
        case '3':return "Three";
        case '4':return "Four";
        case '5':return "Five";
        case '6':return "Six";
        case '7':return"Seven";
        case '8':return "Eight";
        case '9':return "Nine";
        default :return "";
    }
}
int main(){
    char str[100];
    int flag=1;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++){
        if(is_number(str[i])){
            flag=0;
            char *num=number_to_string(str[i]);
            int len=strlen(num);
            // printf("%d\n",len);
            memmove(str+i+len,str+i+1,strlen(str+i));
            strncpy(str+i,num,strlen(num));
            i += len-1;
        }
    }
    // for(int i=0;str[i];i++) printf("str[%d]=%c\n",i,str[i]);
    if(flag) printf("Numeric character not found.");
    else printf("%s\n",str);
}