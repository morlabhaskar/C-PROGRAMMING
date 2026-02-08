#include <stdio.h>

// struct Point {
//     int x;
//     double y;
// };

// int main() {
//     struct Point p1 = {1, 2};
//     printf("%d %lu", p1.x, p1.y);
//     return 0;
// }

// #include <stdio.h>
//     struct course
//     {
//         int courseno;
//         char coursename[25];
//     };
// int main()
// {
//     struct course c[] = {{102, "C"},{103, "ARM"},{104, "LINUX"}};
//     printf("%d ", c[1].courseno);
//     printf("%s\n", (*(c+2)).coursename);
//     return 0;
// }

// struct Data {
//     int arr[3];
// };
// int main() {
//     struct Data d1 = {{1, 2, 3}};
//     struct Data d2;
//     d2 = d1;
//     d2.arr[0] = 10;
//     printf("%d %d %d\n", d1.arr[0], d1.arr[1], d1.arr[2]);
//     return 0;
// }

// #include <stdio.h>
// struct Point {
//     int x;
//     int y;
// };
// void setValues(struct Point p) {
//     p.x = 5;
//     p.y = 10;
// }
// int main() {
//     struct Point pt = {1, 2};
//     setValues(pt);
//     printf("%d %d\n", pt.x, pt.y);
//     return 0;
// }

#include <stdio.h>

// struct Person {
//     char name[30];
//     int age;
// };
// int main() {
//     struct Person p1;
//     p1.name = "Alice";
//     p1.age = 30;
//     printf("Name: %s ", p1.name);
//     printf("Age: %d\n", p1.age);
//     return 0;
// }

// struct emp
// {
// char name[20];
// int age;
// float sal;
// };
// int main(){
// struct emp e ={"Tiger"}
// printf("%d%d%f",e.age,e.sal);
// }

// #include <stdio.h>
// struct p
// {
// int k;
// char c;
// float f;
// };
// int main()
// {
// struct p x = {.c = 97, .f = 3, .k = 1};
// printf("%f\n", x.f);
// }

// struct per{
//     char a;
//     int b;
//     short c;
// };
// int main() {
//     struct per var;
//     printf("%lu", sizeof(var));
//     return 0;
// }

// struct Data {
//     char c;
//     float f;
//     int i;
//     double d;
// };
// int main()
// {
//    struct Data var;
//   printf("%lu\n",sizeof(var));
// }

#include <stdio.h>
// #pragma pack(1 )
// struct MyStruct {
//     char c;
//     int i;
//     double d;
// };
// int main() {
//     struct MyStruct m;
//     printf("%lu", sizeof(m));
//     return 0;
// }

// #include<stdio.h>
// struct Padded{
//      int a;
//      int c;
//      int e;
//      char d;
//      char b;
// };
// int main(){
//      struct Padded v;
//      printf("%lu",sizeof(struct Padded));
// }

// struct Data {
//     char a;
//     int b;
//     float c;
//     char d;
// };

// int main()
// {
//         struct Data D;
//         printf("%lu\n",sizeof(D));
// }

#include <stdio.h>

// struct Padded

// {

//      int a;

//      char b;

//      int c;

//      char d;

//       int e;

// };

// int main()

// {

//      struct Padded v;

//      printf("%lu",sizeof(struct Padded));

// }

// struct Padded

// {

//      double d;

//      char a;

//      char h;

//      int g;

//      int f;

//      char i;

//      int j;

// };

// int main()
// {
//      struct Padded v;
//      printf("%lu",sizeof(struct Padded));
// }

#include <stdio.h>
// struct exp{
//      char a;
//      int b;
//      char c;
// }__attribute__((packed)) v;
// int main(){
//      printf("%lu",sizeof(v));
// }

// #include<stdio.h>
// struct Padded{
//      double d;
//      int g;
//      int f;
//      int j;
//      char a;
//      char h;
//      char i;
// };
// int main(){
//      struct Padded v;
//      printf("%lu",sizeof(struct Padded));
// }

//  struct student{
// int r;
// float m;
// };
//  main(){
// struct student v;
// printf("%d\n",sizeof(v));//8
// printf("%d\n",sizeof(struct student));//8
//  }

//  struct A{
//  int x;
//  int y;
//  };
//  main(){
// struct A v={10,20};
// struct A *p=&v; //p is structure pointer
// printf("%d %d\n",p->x,p->y);//10 20
// printf("%d %d\n",v.x,v.y);//10 20
// }

// struct A{
//     int x;
//     int y;
//     int *p;
// };
// main(){
//     struct A v = {10, 20};
//     v.p = &v.x;
//     *(v.p) = 100;
//     v.p = &v.y;
//     *(v.p) = 200;
//     // printf("%d\n", sizeof(v));//4
//     printf("%d %d %d\n", v.x,v.y,*(v.p));//100 200 200
// }

// struct A{
//     int x = 10;
//     int y = 20;
// } v;
// main(){
//     printf("%d %d\n", v.x, v.y);//error
// }

// struct st{
//     int a : 5;
//     char b : 3;
//     float c : 2;
// };
// main(){
//     struct st v;
//     printf("%d\n", sizeof(v));//error:float not valid in bit-fields
// }

// struct st{
//     int a : 5;
//     char b : 3;
//     int c : 2;
// };
// main(){
//     struct st v;
//     printf("%d\n", sizeof(v));//Mixing char and int as base types for bit-fields is not allowed by the C standard.
//     printf("%u\n", v.a);
//     printf("%u\n", v.b);
//     printf("%u\n", v.c);
// }

// struct st {
//     int a : 5;
//     int b : 3;
//     int c : 2;
// };
// int main() {
//     struct st v = {5, 4, 3};
//     // printf("%d\n", sizeof(v));
//     printf("%d\n", v.a);//5
//     printf("%d\n", v.b);//-4
//     printf("%d\n", v.c);//-1
// }

// struct st {
//     unsigned int a : 5;
//     unsigned int b : 3;
//     unsigned int c : 2;
// };
// int main() {
//     struct st v = {5, 4, 3};
//     // printf("%d\n", sizeof(v));
//     printf("%d\n", v.a);//5
//     printf("%d\n", v.b);//4
//     printf("%d\n", v.c);//3
// }


