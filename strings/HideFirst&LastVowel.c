//wap to Hide the first & last occurance vowels in the given string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_vowel(char ch){
    ch = tolower(ch);
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
void hide_first_vowel(char *ptr){
    for(int i=0;ptr[i];i++){
        if(is_vowel(ptr[i])){
            ptr[i] = '*';
            break;
        }
    }
}
void hide_last_vowel(char *ptr){
    for(int i=strlen(ptr)-1;ptr[i];i--){
        if(is_vowel(ptr[i])){
            ptr[i] = '*';
            break;
        }
    }
}
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    hide_first_vowel(str);
    hide_last_vowel(str);
    printf("%s\n",str);
}