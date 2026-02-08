//wap to Hide the Alternate occurance of given character in the given string
#include<stdio.h>
#include<string.h>

// char* my_strchr(char *ptr,char ch){
//     while((*ptr) != '\0'){
//         if((*ptr)==ch){
//             return ptr;
//         }
//         ptr++;
//     }
//     return NULL;
// }

int main(){
    char str[30],ch;
    int cnt=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    printf("Enter the Character :\n");
    ch = getchar();
    // for(int i=0;str[i];i++){
    //     if(str[i]==ch){
    //         if(cnt%2==0){
    //             str[i] = '*';
    //         }
    //         cnt++;
    //     }
    // }
    char *ptr=str;
    while(*ptr){
        if(*ptr==ch){
            cnt++;
            if(cnt%2==1){
                memset(ptr,'*',1);
            }
        }
        ptr++;
    }
    printf("%s\n",str);
}
