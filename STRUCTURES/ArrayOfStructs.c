//WAP to store array of structures
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int id;
    double a;
    char name[20];
};
int main(){
    struct student *ptr=NULL;
    int n;
    printf("Enter n value :\n");
    scanf("%d",&n);
    ptr=malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++){
        printf("Enter %d student :\n",i+1);
        printf("Enter id :\n");
        scanf("%d",&ptr[i].id);
        printf("Enter Name :\n");
        getchar();
        fgets(ptr[i].name,sizeof(ptr[i].name),stdin);
        ptr[i].name[strlen(ptr[i].name)-1]='\0';
    }
    printf("Result :\n");
    for(int i=0;i<n;i++){
        printf("Student [%d] :",i+1);
        printf("%d  %s  %d\n",ptr[i].id,ptr[i].name,sizeof(ptr[i]));
    }
    free(ptr);
    return 0;
}
