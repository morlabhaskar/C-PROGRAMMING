//Cube of a number
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     printf("Cube of given number is :%d",number*number*number);
//     return 0;
// }


//ASCII code for the above C program
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a Char:");
//     scanf("%c",&ch);
//     printf("ASCII of given Character is :%d",ch);
//     return 0;
// }

//Code for givven number is even or odd
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Given number is Even");
//     }else{
//         printf("Given number is Odd");
//     }
//     return 0;
// }

// Boolean data type
// The C programming language does not have a built-in boolean data type.
// #include <stdio.h>
// #include <stdbool.h>  // Import the boolean header file 

// int main() {
//   bool isProgrammingFun = true;
//   bool isFishTasty = false;
//   printf("%d\n", isProgrammingFun);  // Returns 1 (true)
//   printf("%d", isFishTasty);         // Returns 0 (false)

//   return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n=5,a,b,A,B,x=5,s=0;
//     for(a=1;a<=n;a++){
//         for(b=-(n-1);b<n;b++){
//             if((x <= a) && (s <= n)){
//               printf("*");
//               s++;
//             }
//             else{
//               printf(" ");
//             }
//             x--;
//         }
//         x = 5;

//         printf("\n");
//     }
// }


// #include <stdio.h>
// int fun(int n){
// int x=1, k;
// if (n==1) return x;
// for (k=1; k<n; ++k)
// x = x + fun (k) * fun (n - k);
// return x;
// }
// int main(){
//   printf("%d",fun(4));

// }

// #include<stdio.h>
// int f1(void);
// int f2(void);
// int f3(void);
// int x = 10;
// int main( )
// {
// int x = 1;
// x +=f1() + f2() + f3() + f2();
// printf("%d", x);
// return 0;
// }
// int f1() { int x = 25; x++; return x; }
// int f2() { static int x = 50; x++; return x; }
// int f3() { x *= 10; return x; }



// int a, b, c = 0;
// void prtFun (void);
// int main ()
// {
// static int a = 1; 
// prtFun();
// a += 1;
// prtFun();
// printf ( "\n %d %d " , a, b) ;
// }
// void prtFun (void)
// {
// static int a = 2; 
// int b = 1;
// a += ++b;
// printf (" \n %d %d " , a, b);
// }

// #include <stdio.h>
// int main() {
//     int a[5] = {10, 20, 30, 40, 50};
//     int i = 3;
//     printf("%d\n", i+2[a]);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int *ptr = (arr + 2);
//     printf("%d\n", ptr[-1]);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a[3] = {10, 20, 30};
//     int *p = a;
//     printf("%d\n", *(p++ + 1));
//     printf("%d\n", *p);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[3] = {1, 2, 3};
//     int *ptr = arr;
//     ++*ptr;
//     ptr += 1;
//     (*ptr)++;
//     printf("%d %d %d", arr[0], arr[1], arr[2]);
//     return 0;
// }
// #include <stdio.h>
// int main() 
// {
//     int a[] = {5, 10, 15};
//     int *p = a;
//     ++*p;
//     p++;
//     *p += 2;
//     printf("%d %d\n", a[0], a[1]);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//         int arr[5] = {10, 20, 30, 40, 50};
//         void *p = arr;
//         p = (char *)p + sizeof(int);
//         printf("%d\n",*(int *)p);
//         return 0;
// }
// int main() { 

//  int y[4] = {6, 7, 8, 9};

//  int *ptr = y + 2; 

//  printf("%d", ptr[ 1 ] ); 

//  }
#include<stdio.h> 
// int main() { 
//   int a=5;
//   int *p; 
//   p=&a; 
//   printf("Enter the data..."); 
//   scanf("%d",p); // if 16 is given through keyboard 
//   printf("%d,%d",a,*p); 
// }
// int main() { 
//   int a[5]={1,3,6,7,0}; 
//   int *b; 
//   b=&a[2]; 
//   printf("%d",b[-1]); 
// }
// #include<stdio.h>
// void main()
// {
// int a[5]={1,2,3,4,5};
// int *ptr=(int *)(&a+1);
// // ptr-1;
// printf("%d %d ",*(a+1),*(ptr-5));
// }
// int main() {
//   int A[]={1,2,3,4,5}; 
//   int x; 
//   x=*A+1-*A+3; 
//   printf("%d", x); 
// }
// int main() { 
//   int y[4] = {6, 7, 8, 9}; 
//   int *ptr = y + 2; 
//   printf("%d", ptr[ 1 ] ); 
// }
// int main() { 
//   int z[3]={1,2,3}; 
//   int *p=&z[1]; 
//   int x=*p++; 
//   printf("%d",x); 
// }
// int main() { 
//   int i; 
//   double a=5.2; 
//   char *ptr; 
//   ptr=(char *)&a; 
//   for(i=0;i<=7;i++) printf("%d ",*ptr++); 
// }

// int main()
// { 
// char str[]={'A','B','C','D','E'};
// str++;
// printf("%c",*str);
// }
#include<stdio.h>
// int main()
// {
// int arr[ ]={1.2, 2.4, 3.6, 4.8, 5.9};
// int j, *ptr = arr;
// for(j = 0;j<5;j++)
// {
// printf("%d ", *arr);
// ++ptr;
// }
// }
// int main() { 
//   int a[]={11,22,33}; 
//   int *p=a; 
//   printf("%d",p[0]++); 
//   printf("%d",a[0]++); 
// }
// #include<stdio.h> 
// int main(){ 
//   int a = 320; 
//   char *ptr; 
//   ptr =( char *)&a; 
//   printf("%d ",*ptr); 
//   return 0; 
// }
#include<stdio.h>
// int main()
// {
//   int x=10,y=15,z=320;
//   char*ptr=&x;
//   ++ptr;
//   ++ptr;
//   printf("%d\n",ptr[2]);
//   printf("%d\n",*(ptr+2));
//   printf("%d\n",((((ptr+2)-2)[-2])));
//   ptr[2]=-1;
//    ptr[6]=-1;
//   printf("x=%d\n",x);
//   printf("y=%d\n",y);
//   printf("z=%d\n",z);
// }

// #define call(x,y) x##y
// void main(){
// int x=5,y=10,xy=20;
// printf("%d",xy+call(x,y));
// }

// #define FALSE -1
// #define TRUE 1
// #define NULL 0
// main()
// {
// if(NULL)
// puts("NULL");
// else if(FALSE)
// puts("TRUE");
// else
// puts("FALSE");
// }

// #include<stdio.h>
// #define DC 10
// void main()
// {
// #ifdef DC
// printf("DC=%d ",DC);
// #else
// printf("not defined");
// #endif
// #undef DC
// #define DC 66
// printf("DC=%d ",DC);
// }

// #include<stdio.h>
// #define MAX printf("Hello ");
// printf("Hi ");
// #define MIN printf("Bye ");
// main()
// {
// if(5>10)
// MAX
// else
// MIN
// }

// #include<stdio.h>
// main()
// {
// #define i 10
// #if i==10
// printf("True");
// #else
// printf("False ");
// #endif
// }

// #include<stdio.h>
// #define x 5+5
// int main()
// {
// int i;
// i = x * x * x;
// printf("%d ",i);
// }

// #include<stdio.h>
// #define _vec(x) ++x * ++x
// int main()
// {
// int a = 3, z;
// z = ++a * ++a;
// a -= 3;
// printf("%d %d", _vec(a), z);
// }

// #include<stdio.h>
// #define v 9
// main()
// {
// int b;
// #define v 10
// b=v*5;
// printf("%d",b);
// }

// #define paste(a,b) a##b 
// main() 
// {
//  int a=3,b=6;
//  Printf("%d", paste(a,b));
//  }

// #define CUBE(x) x*x*x
// main()
// {
// int a,b=3;
// a=CUBE(b++);
// printf("%d %d",a,b);
// }

// #include<stdio.h>
// #define MAX printf("Hello ");
// #define MIN printf("Bye ");
// int main()
// {
//     if(5 > 10)
//         MAX
//     else
//         MIN
//     return 0;
// }

// #include<stdio.h>
// #define LOOP(a) int i;\
// for(i=1;i<=a;i++);\
// printf("%d ",i);
// void main()
// {
// LOOP(5);
// }

// #include<stdio.h>
// #define Macro(a) printf("Macro=%d",a);
// void main()
// {
// Macro(10);
// }

// #include<stdio.h>
// #define NODE(a) a*10+2
// void main()
// {
// int a=NODE(2)*2;
// printf("%d ",a);
// }

// #define sum(a,b,c) a+b+c
// #define avg(a,b,c) sum(a,b,c)/3
// #define geq(a,b,c) avg(a,b,c) >= 60
// #define lee(a,b,c) avg(a,b,c) <= 60
// #define des(a,b,c,d) (d==1?geq(a,b,c):lee(a,b,c))
// main () {
// int num = 70;
// char ch = '0';
// float f = 2.0;
// if des(num,ch,f,0) puts ("lee..");
// else puts("geq...");
// }