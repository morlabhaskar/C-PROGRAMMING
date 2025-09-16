//Hide the pair of vowels
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(char ch){
    ch = tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return 1;
    }
    return 0;
}
int main(){
    char str[100],cnt=0;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }

    for(int i=0;str[i] != '\0';i++){
        
        if(isVowel(str[i]) && isVowel(str[i+1])){ 
            str[i] = '*';
            str[i+1] = '*';
            cnt++;
        }
        
    }
    if(cnt == 0){
        printf("there is no pair of vowels to hide");
    }
    else{
        printf("%s",str);
    }
    return 0;
}