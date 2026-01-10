//WAP to Upper of First and Last Character in a given String.
#include<stdio.h>
#include<string.h>
int check_alpha(char ch){
    if(ch>=97 && ch<=122){
        return 1;
    }
    return 0;
}
void check_first_last_char(char *ptr){
    for(int j=0;ptr[j];j++){
        if(j==0 || ptr[j+1]==' ' || ptr[j-1]==' ' || j==strlen(ptr)-1){
            if(check_alpha(ptr[j])){
                ptr[j] = ptr[j]-32;
            }
        }
    }
}
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    
    check_first_last_char(str);
    printf("After Changing :\n");
    printf("%s\n",str);
}