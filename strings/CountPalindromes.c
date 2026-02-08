// Count Number of Palindromes in a Given String
#include <stdio.h>
#include <string.h>
int palindrome(char *p){
    int flag = 1;
    char *left = p, *right = p + strlen(p) - 1;
    while (left < right){
        if ((*left) != (*right)){
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    if (flag) return 1;
    return 0;
}
int main(){
    char str[100], *ptr = NULL;
    int count = 0, flag = 0;
    printf("Enter a String :\n");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
    for(int i = 0; str[i]; i++){
        if(str[i] != ' '){
            flag = 1;
            break;
        }
    }
    ptr = str;
    ptr = strtok(ptr," ");
    if(flag == 0) printf("empty string");
    else{
        while(ptr != NULL){
            if(palindrome(ptr)) count++;
            ptr = strtok(NULL, " ");
        }
    }
    if(count == 0 && flag) printf("No Palindrome Words in the given string\n");
    if(count!=0 && flag) printf("Palindrome Words are : %d\n", count);
}