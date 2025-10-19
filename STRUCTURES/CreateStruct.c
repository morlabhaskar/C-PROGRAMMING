#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
};
int main(){
    struct student stu;
    printf("Enter a Name :\n");
    // scanf("%s",stu.name);
    fgets(stu.name,sizeof(stu.name),stdin);
    if(stu.name[strlen(stu.name)-1] == '\n') stu.name[strlen(stu.name)-1] = '\0';
    printf("Enter a Age :\n");
    scanf("%d",&stu.age);
    printf("Name is %s\n",stu.name);
    printf("Age is %d\n",stu.age);
    
}