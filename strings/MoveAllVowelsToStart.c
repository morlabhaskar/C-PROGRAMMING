//Move all Vowels to Beginning of a given String.
#include<stdio.h>
#include<string.h>
int is_vowel(char ch){
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
int main(){
    char str[100],temp;
    char *ptr = NULL;
    int i,j;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    ptr=str;
    for(i=0;str[i]!='\0';i++){
        if(is_vowel(str[i])){
            temp = str[i];
            memmove(ptr+j+1,ptr+j,i-j);
            str[j] = temp;
            j++;
        }
    }
    printf("%s\n",str);
}