//check whether the given string is palindrome or not
#include<stdio.h>
#include<string.h>

//Function is using String Pointer Indexing Method to Find the Given String is Palindrome or Not, returns 1 if palindrome else return 0
// int check_palindrome(char *ptr){
//     int len = strlen(ptr),left = 0,right = len-1,flag=1;
//     while(left<right){
//         if(ptr[left] != ptr[right]){
//             flag=0;
//             break;
//         }
//         left++;
//         right--;
//     }
//     return flag;
// }

//Function is using String Pointer Addressing Method to Find the Given String is Palindrome or Not, returns 1 if palindrome else return 0
int check_palindrome(char *ptr){
    char *left = NULL,*right = NULL;
    int flag = 1;
    left = ptr;
    right = ptr+(strlen(ptr)-1);
    while(left<right){
        if((*left) != (*right)){
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    return flag;
}

int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    int result = check_palindrome(str);

    if(result){
        printf("Given String  \"%s\" is Palindrome",str);
    }
    else{
        printf("Given String  \"%s\" is Not Palindrome",str);
    }
}
/*
Enter a String :
nanan
Given String  "nanan" is Palindrome
*/