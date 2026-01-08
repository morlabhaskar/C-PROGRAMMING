// //wap to input a string and covert the case of the each character
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int is_lower(char ch){
//     if(ch>=97 && ch<=122){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int is_upper(char ch){
//     if(ch>=65 && ch<=90){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     char str[30];
//     printf("Enter a String :\n");
//     fgets(str,sizeof(str),stdin);

//     //For removing '\n' before the '\0' character
//     if(str[strlen(str)-1] == '\n'){
//         str[strlen(str)-1] = '\0';
//     }
//     for(int i=0;str[i];i++){
//         if(is_lower(str[i])){
//             // printf("%c",str[i]-32);
//             // str[i] =toupper(str[i]);
//             str[i] =str[i]-32;
//         }
//         else if(is_upper(str[i])){
//             // printf("%c",str[i]+32);
//             // str[i] =tolower(str[i]);
//             str[i] =str[i]+32;
//         }
//     }
//     printf("%s\n",str);
// }

#include<stdio.h>
#include<string.h>
int is_upper(char ch){
    if(ch>=65 && ch<=90){
        return 1;
    }
    else{
        return 0;
    }
}
int is_lower(char ch){
    if(ch>=92 && ch<=122){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char str[100];
    int flag=1;
    INPUT:
    printf("Enter the String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    
    for(int i=0;str[i];i++){
        if(is_upper(str[i])){
            flag=0;
            str[i]= str[i]+32;
        }
        else if(is_lower(str[i])){
            flag=0;
            str[i]=str[i]-32;
        }
    }
    if(flag){
        printf("Invalid Input\n");
        goto INPUT;
    }
    else{
        printf("%s",str);
    }
}
