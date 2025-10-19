#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
};
int main(){
    struct student stu1;
    struct student stu2;
    struct student stu3;
    printf("Enter a Name :\n");
    fgets(stu1.name,sizeof(stu1.name),stdin);
    if(stu1.name[strlen(stu1.name)-1] == '\n') stu1.name[strlen(stu1.name)-1] = '\0';
    printf("Enter a Age :\n");
    scanf("%d",&stu1.age);
    printf("Name is %s\n",stu1.name);
    printf("Age is %d\n",stu1.age);
    
}