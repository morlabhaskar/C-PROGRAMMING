//Name Data Base with Fixed Rows and Columns
#include<stdio.h>
#include<string.h>
int count = 0,MAX=5;
void printMenu() {
    printf("\n");
    printf("=========================================\n");
    printf("               MAIN MENU               \n");
    printf("=========================================\n");
    printf(" i : Input Record\n");
    printf(" p : Print All Records\n");
    printf(" f : Find a Record\n");
    printf(" q : Quit\n");
    printf("=========================================\n");
    printf("Enter your choice:\n");
}
void input(char (*ptr)[20]){
    if(count>=MAX){
        printf("Array is Full !\n");
        return;
    }
    printf("Enter a Name :\n");
    fgets(ptr[count],sizeof(ptr[count]),stdin);
    if(ptr[count][strlen(ptr[count])-1]=='\n') ptr[count][strlen(ptr[count])-1]='\0';
    count++;
}
void print(char (*ptr)[20]){
    if(count==0) printf("Data Base is Empty !");
    else{
        printf("\n=== Stored Data ===\n");
        for(int i=0;i<count;i++){
            printf("names[%d] = %s\n",i,ptr[i]);
        }
        printf("===================\n");
    } 
}
void find(char (*ptr)[20]){
    int flag=1;
    char fname[20];
    if(count==0) printf("Data Base is Empty !\n");
    else{
        printf("Enter a Finding Name :\n");
        fgets(fname,sizeof(fname),stdin);
        if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]='\0';

        for(int i=0;i<count;i++){
            if(strcmp(fname,ptr[i])==0){
                flag=0;
                printf("\n=== Finding Data ===\n");
                printf("Name at Index of %d is name = %s\n",i,ptr[i]);
                printf("===================\n");
            }
        }
        if(flag) printf("Name is Not Found !\n");
    } 
}
int main(){
    char names[5][20];
    char choice;
    while(1){
        printMenu();
        scanf(" %c",&choice);
        getchar();
        switch(choice){
            case 'i':input(names);break;
            case 'p':print(names);break;
            case 'f':find(names);break;
            case 'q':return 0;
            default:printf("ERROR : Invalid Entry !\n");
        }
    }
}