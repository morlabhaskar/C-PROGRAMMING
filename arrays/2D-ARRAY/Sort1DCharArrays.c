#include<stdio.h>
#include<string.h>
void intput_array(char (*ptr)[10],int row){
    for(int i=0;i<row;i++){
        fgets(ptr[i],sizeof(ptr[i]),stdin);
        //For removing '\n' before the '\0' character
        if(ptr[i][strlen(ptr[i])-1]=='\n') ptr[i][strlen(ptr[i])-1]='\0';
    }
}
void print_array(char (*ptr)[10],int row){
    for(int i=0;i<row;i++){
        printf("%s\t",ptr[i]);
    }
}
void sort_an_2d_array(char (*ptr)[10],int row){
    char temp[20];
    for(int i=row-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(strcmp(ptr[j],ptr[j+1])>0){
                strcpy(temp,ptr[j]);
                strcpy(ptr[j],ptr[j+1]);
                strcpy(ptr[j+1],temp);
            }
        }
    }
}
int main(){
    char arr[5][10];
    int row=sizeof(arr)/sizeof(arr[0]);
    printf("Enter Input Arrays :\n");
    intput_array(arr,row);

    printf("Arrays Before Sorting are :\n");
    print_array(arr,row);

    sort_an_2d_array(arr,row);

    printf("\nArrays After Sorting are :\n");
    print_array(arr,row);
}