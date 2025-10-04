 //WAP to Remove Extra Spaces in a given string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[30];
//     char *ptr = NULL;
//     printf("Enter a String :\n");
//     fgets(str,sizeof(str),stdin);

//     //For removing '\n' before the '\0' character
//     if(str[strlen(str)-1] == '\n'){
//         str[strlen(str)-1] = '\0';
//     }
//     ptr=str;
//     while((*ptr)!='\0'){
//         if((*ptr)==' '){
//             if((*(ptr+1))==' '){
//                 memmove(ptr,ptr+1,strlen(ptr+1)+1);
//                 ptr--;
//             }
//         }
//         ptr++;
//     }
//     printf("%s\n",str);
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[100],flag=1,*ptr=NULL;
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    //check empty string or not.
    for(int i=0;str[i];i++){
        if(str[i]!=' ') flag=0;
    }
    ptr=str;
    for(int i=0;str[i];i++){
        if(i==0 && str[i]==' '){
            memmove(ptr,ptr+1,strlen(ptr+1)+1);
            i--;
        }
        else if(str[i]==' ' && str[i+1]==' '){
            memmove(ptr,ptr+1,strlen(ptr+1)+1);
            i--;
        }
        else ptr++;
    }
    if(flag){
        printf("empty string");
        return 0;
    }
    printf("%s",str);
    return 0;
}