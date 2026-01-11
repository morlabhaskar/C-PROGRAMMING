#include<stdio.h>
#include<string.h>
void intput_array(char (*ptr)[10],int row){
    for(int i=0;i<row;i++){
        fgets(ptr[i],sizeof(ptr[i]),stdin);
        if(ptr[i][strlen(ptr[i])-1]=='\n') ptr[i][strlen(ptr[i])-1]='\0';
    }
}
void print_array(char (*ptr)[10],int row){
    for(int i=0;i<row;i++){
        printf("Name %d is :\n",i);
        for(int j=0;ptr[i][j];j++){
            printf("ptr[%d][%d]=%c\n",i,j,ptr[i][j]);
        }
    }
}
int main(){
    char arr[5][10]={"int","char","float","double","abc"};
    int row=sizeof(arr)/sizeof(arr[0]);
    printf("Enter Input Arrays :\n");
    // intput_array(arr,row);
    printf("Arrays are :\n");
    print_array(arr,row);
}

/*Enter Input Arrays :
Morla
Bhaskar
Nani
Goud
Ravi
Arrays are :
Name 0 is :
ptr[0][0]=M
ptr[0][1]=o
ptr[0][2]=r
ptr[0][3]=l
ptr[0][4]=a
Name 1 is :
ptr[1][0]=B
ptr[1][1]=h
ptr[1][2]=a
ptr[1][3]=s
ptr[1][4]=k
ptr[1][5]=a
ptr[1][6]=r
Name 2 is :
ptr[2][0]=N
ptr[2][1]=a
ptr[2][2]=n
ptr[2][3]=i
Name 3 is :
ptr[3][0]=G
ptr[3][1]=o
ptr[3][2]=u
ptr[3][3]=d
Name 4 is :
ptr[4][0]=R
ptr[4][1]=a
ptr[4][2]=v
ptr[4][3]=i*/