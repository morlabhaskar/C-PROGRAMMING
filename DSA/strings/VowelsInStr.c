#include<stdio.h>
#include<string.h>
#include<ctype.h>
void print(char *ptr){
    for(int i=0;ptr[i] != '\0';i++){
        printf("%c\t",ptr[i]);
    }
}
void print1(char *ptr1){
    while((*ptr1) != '\0'){
        printf("%c\t",*ptr1);
        ptr1++;
    }
}
int isVowel(char ch){
    ch = tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return 1;
    }
    return 0;
}
int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    print(str);
    printf("\n");
    print1(str);

    printf("\n Vowel in Given String is : \n");
    for(int i=0;str[i] != '\0';i++){
        if(isVowel(str[i])){
            printf("%c\t",str[i]);
        }
    }
}