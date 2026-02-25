//using integer pointer
// #include<stdio.h>
// void print_binary_using_int(float *num){
//     int *ptr=(int*)num; //Treat Float as Int
//     for(int bit=31;bit>=0;bit--){
//         printf("%d",(*ptr>>bit)&1);
//     }
// }
// int main(){
//     // float num=23.4;  //0100000110111011001100110011001
//     float num=23.4;
//     // printf("Enter Float Number :\n");
//     // scanf("%f",&num);
//     printf("Binary (int* Method) :\n");
//     print_binary_using_int(&num);
//     return 0;
// }

//using char pointer
// #include<stdio.h>
// int main(){
//     char str[32];
//     float f=23.4f;
//     char *cp = (char *)&f;
//     for(int i=0;i<4;i++){
//         str[i]=cp[i];
//     }
//     printf("Binary : ",str);
//     for(int i=0;i<4;i++){
//         for(int j=7;j>=0;j--){
//             printf("%d",(str[i]>>j)&1);
//         }
//         printf(" ");
//     }
// }


#include<stdio.h>
int main(){
    float num=23.4;
    char *ch = (char*)&num;
    char str[5];
    for(int i=0;i<4;i++){
        str[i]=ch[i];
    }
    str[4]='\0';
    printf("String is :\n");
    printf("%s\n",str);
    printf("Binary is :\n");
    for(int i=0;i<4;i++){
        for(int j=7;j>=0;j--){
            printf("%d",(str[i]>>j)&1);
        }
        printf(" ");
    }
}


















