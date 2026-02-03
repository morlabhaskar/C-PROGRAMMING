// Count Number of Palindrome sub-string in a Given String using sliding window.
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
    return flag ? 1 : 0;
}
int main(){
    char str[100];
    int count = 2,res=0;
    printf("Enter a String :\n");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';

    while(count<strlen(str)+1){
        for(int i=0;i<=strlen(str)-count;i++){
            int cnt=0;
            char temp[100];
            for(int j=i;j<=i+count-1;j++){
                temp[cnt]=str[j];
                cnt++;
            }
            temp[cnt]='\0';
            if(palindrome(temp)){
                printf("%s\n",temp);
                res++;
            }
        }
        count++;
    }
    printf("%d",res);
}