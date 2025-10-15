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

    // For removing '\n' before the '\0' character
    if (str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
    
    ptr = str;
    ptr = strtok(ptr, " ");
    for (int i = 0; str[i]; i++){
        if (str[i] != ' '){
            flag = 1;
            break;
        }
    }
    if (flag == 0) printf("empty string");
    else{
        while (ptr != NULL){
            if (palindrome(ptr)) count++;
            ptr = strtok(NULL, " ");
        }
    }
    if (count == 0 && flag) printf("no palindromes in the given string\n");
    if(count!=0 && flag) printf("%d\n", count);
}