//Reverse a Given String
#include<stdio.h>
#include<string.h>

//Function is using String Pointer Indexing Method to modified the reverse string
// void reverse_string(char *ptr){
//     int len = strlen(ptr),left = 0,right = len-1;
//     while(left<right){
//         if(ptr[left] != ptr[right]){
//             int temp = ptr[left];
//             ptr[left] = ptr[right];
//             ptr[right] = temp;
//         }
//         left++;
//         right--;
//     }
// }

//Function is using String Pointer Addressing Method to modified the reverse string
void reverse_string(char *ptr){
    char *left = NULL,*right = NULL,temp;
    left = ptr;
    right = ptr+(strlen(ptr)-1);
    while(left<right){
        if((*left) != (*right)){
            temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}

int main(){
    char str[30];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    //For removing '\n' before the '\0' character
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
    printf("Before Reversing String is \"%s\"\n",str);
    reverse_string(str);
    printf("After Reversing String is \"%s\"\n",str);
}