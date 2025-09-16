//Insert a String At Perticular Position at First String
//With Temp Variable
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[30],str2[30],temp[30];
//     int pos;
//     printf("Enter a String1 :\n");
//     fgets(str1,sizeof(str1),stdin);

//     printf("Enter a String2 :\n");
//     fgets(str2,sizeof(str2),stdin);

//     printf("Enter a Position :\n");
//     scanf("%d",&pos);

//     if(str1[strlen(str1)-1] == '\n'){
//         str1[strlen(str1)-1] = '\0';
//     }
//     if(str2[strlen(str2)-1] == '\n'){
//         str2[strlen(str2)-1] = '\0';
//     }

//     if(pos>strlen(str1)){
//         printf("You Entered Position is Outoff Range in String-1\n");
//     }
//     else{
//         printf("Output is : \n");
//         strcpy(temp,str1+pos);
//         strcpy(str1+pos,str2);
//         strcpy(str1+strlen(str1),temp);
//     }
//     printf("%s\n",str1);
// }


//Without Temp Variable
#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    int pos;
    printf("Enter a String1 :\n");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter a String2 :\n");
    fgets(str2,sizeof(str2),stdin);

    printf("Enter a Position :\n");
    scanf("%d",&pos);

    if(str1[strlen(str1)-1] == '\n'){
        str1[strlen(str1)-1] = '\0';
    }
    if(str2[strlen(str2)-1] == '\n'){
        str2[strlen(str2)-1] = '\0';
    }

    if(pos>strlen(str1)){
        printf("You Entered Position is Outoff Range in String-1\n");
    }
    else{
        for(int i=strlen(str1);i>=pos;i--){
            str1[i+strlen(str2)] = str1[i];
        }
        strncpy(str1+pos,str2,strlen(str2));
    }
    printf("%s\n",str1);
}