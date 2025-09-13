#include<stdio.h>
#include<string.h>
void print(char* ptr){
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
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int str[30];
    printf("Enter a String :\n");
    fgets(str,20,stdin);
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