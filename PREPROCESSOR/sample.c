#include<stdio.h>
// #define CUBE(x) x*x*x
// int main()
// {
// int a,b=3;
// a=CUBE(b++);
// printf("%d %d",a,b);//60 6
// }

// #define x 5+5
// int main()
// {
// int i;
// i = x * x * x;
// printf("%d ",i);
// }

// #define _vec(x) ++x * ++x
// int main()
// {
// int a = 3, z;
// z = ++a * ++a;
// a -= 3;
// // printf("%d %d",a,z);
// printf("%d %d", _vec(a), z);
// }

// #define loop while(1)
// int main(){
// loop
// printf("vector india ");
// }

// #define int double
// main(){
// int confident=12345;
// printf("%d ",sizeof(confident));
// }

// #define NODE(a) a*10+2
// void main(){
// int a=NODE(2)*2;
// printf("%d ",a);
// }

// #define LOOP(a) int i;\
// for(i=1;i<=a;i++);\
// printf("%d ",i);
// void main(){
// LOOP(5);//6
// }

// #define v 9
// main(){
// int b;
// #define v 10
// b=v*5;
// printf("%d",b);//50
// }

// #define big(a,b) a > b ? a : b
// #define swap(a,b) temp=a; a=b; b=temp;
// void main(){
// int a=3,b=5,temp=0;
// if ((3+big(a,b)) > b) swap(a,b);
// printf("%d %d",a,b);//5 0
// }

// #define calc(a, b) (a * b) / (a - b)
// void main(){
// int a = 20, b = 10;
// printf("%d", calc(a + 4, b -2));//4
// }

// #define x 10;
// int main(){
// printf("%d",x);//ERROR
// }

// #define a 10
// int main(){
//  #ifdef a
// printf("VECTOR "); //VECTOR
//  #endif
//  #ifndef a
//  printf("INDIA\n");
//  #else
//  printf("HYDERABAD\n"); //HYDERABAD
//  #endif
//  return 0;
// }

// #define max 100
// int main(){
// #ifdef max
//  printf("Hello");//error
// return 0;
// }

// #define max 100
// int main(){
// #if(max%10)
//  printf("VECTOR ");
// #endif
//  printf("INDIA");//INDIA
// }

// #if X == 3
//  #define Y 3
// #else
//  #define Y 5
// #endif
// int main(){
//  printf("%d", Y); //5
//  return 0;
// }

// #define X 3
// #if !X
//  printf("Good");
// #else
//  printf("Bad");//error for %s
// #endif
// int main(){
//  return 0;
// }

// #define ISEQUAL(A, B) A == B
// #define VAL !1
// int main(){
//  #if ISEQUAL(VAL, 0)
//  printf("OK");//ok
//  #else
//  printf("NOT OK");
//  #endif
//  return 0;
// }

// #define MAX 1000
// int main(){
//  int MAX = 100;
//  printf("%d ", MAX);// ERROR : in expansion of macro 'MAX'
// return 0;
// }

// #define A -B
// #define B -C
// #define C 5
// int main(){
//  printf("The value of A is %d\n", A);//5
//  return 0;
// }

// #define hello(x) printf("a"#x" = %d",a##x)
// #define A3
// int a3=45;
// int main(){
// #ifdef A3
//  hello(3);//a3=45
// #else
//  printf("VECTOR");
// #endif
// return 0;
// }

// #define hello(x) printf("a"#x" = %d",a##x)
// int a3=45;
// int main(){
// #ifdef a3
//  hello(3);
// #else
//  printf("VECTOR");
// #endif
// return 0;
// }

// #define hello(v) #v
// int main(){
// hello(nah gs); //nah gs
// return 0;
// }

// #define print(x,y) #x#y
// int main(){
// printf(print(hello,"World!")); //hello"World!"
// return 0;
// }

// #define VAL 10
// int main(){
// #ifdef VAL
// #undef VAL
// #define VAL 100
// #else
// #define VAL 2000
// #endif
// printf("%d\n",VAL);//100
// }

// void fun(){
// #define VAL 100
// printf("%d\n",VAL);
// }
// int main(){
// #define VAL 200
// fun();
// printf("%d\n",VAL);//100  200
// }

// #define print(x) printf(#x "...")
// int main(){
// print(Hi);//Hi...
// print(Good Morning!);//Good Morning!...
// }

// #define p(n,m) printf("%d",m##n)
// #define q(a,b) printf("%d",a##b)
// main(){
//  p(3,4);//43
//  q(5,6);//56
// }

// #define hello 10
// void main(){
//  printf("%d",hello);
//  #undef hello
//  printf("%d",hello);//error
// }

// #define sf 10
// main(){
// if(sf==100)
// printf("good");
// else{
// printf("bad");
//  sf=100;
// }
// printf("%d",sf);//error
// }

// # define a 10
// void main(){
//  printf("%d..", a);//10
//  foo();
//  printf("%d", a);//10
// }
// void foo(){
//  #undef a
//  #define a 50
// }











































