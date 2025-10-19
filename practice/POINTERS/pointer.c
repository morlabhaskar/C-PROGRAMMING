#include<stdio.h>
// int main(){
//     int num = 10;
//     printf("num=%d\n",num);  //num=10
//     printf("&num=%u\n",&num);  //&num=6422300
//     int *iptr=&num;
//     printf("ptr=%u\n",iptr);   //ptr=6422300
//     printf("*ptr=%d\n",*iptr);   //*ptr=10
//     printf("&ptr=%u\n",&iptr);   //&ptr=6422296
// }

// int main(){
// char *p;
// float *q;
// double *r;
// printf("%d %d %d\n",sizeof(p), sizeof(q),sizeof(r)); //4 4 4
// printf("%lu %lu %lu\n", sizeof(*p),sizeof(*q),sizeof(*r));// 1 4 8
// }

// int main(){
// double var;
// char *cp=&var;//cosider the address of var is 5000
// printf("%lu %lu\n",cp,cp+1);  //garbage   garbage+1
// }

// int main() { 
//     char *cp=0; 
//     double *dp=0;
//     printf("%lu %lu\n",cp,dp); // 0 0
//     ++cp; //cp = 0 + 1 = 1
//     ++dp; //dp = 0 + 8 = 8
//     printf("%lu %lu\n",cp,dp);// 1  8
// }

// int main() {
// char c1='a',c2;
// char *p1=&c1,*p2=&c2;//pointers initialized
// *p2=*p1;//Indirectly c2 is assigned with c1.
// //c2=c1; //direct assignment.
// printf("c1=%c c2=%c\n",c1,c2);  // a  a
// }

// int main(){
//     int i=50; 
//     float f=23.5;//initialisations
//     int *ip; 
//     float *fp;//declarations. pointers declared.
//     ip=&i; 
//     fp=&f;//assignments
//     ++(*ip);//increment data indirectly
//     (*fp)++;
//     printf("i=%d f=%f\n",i,f); //51  24.5
// } 

// int main() {
//     int i1=520,i2=0;
//     float f1=23.4,f2=0.0;
//     char *ptr;
//     ptr=&i1;
//     i2=*ptr;//i2=*(int*)ptr;
//     ptr=&f1;
//     f2=*ptr;//f2=*(float*)ptr;
//     printf("i2=%d f2=%f\n",i2,f2); //8 51.00000
// }

// int main()
// {
//     void *ptr;
//     short int i1 = 520, i2 = 0;
//     float f1 = 23.4, f2 = 1.0;
//     ptr = &i1;
//     i2 = *(short int*)ptr;
//     ptr = &f1;
//     f2 = *(float*)ptr;
//     printf("i2=%hd f2=%f\n", i2, f2);//520  23.4
// }

// int main() { 
//     int var=0x12345678; 
//     char *ptr=&var;
//     printf("%x\n",*ptr);//78
//     ptr++;
//     printf("%x\n",*ptr);//56
//     printf("%x\n",*(short int*)ptr);//3456
// }

// int main(){
//     char ch=50;
//     char *ptr=&ch;
//     printf("%c\n",--*ptr);//1
//     printf("%c\n",ch);//1
// }

// void fun( int *p, int q){
//     printf("in fun...%d %d\n",++*p,++q);//11   21
// }
// int main() {
//     int x=10,y=20;
//     fun(&x,y);
//     printf("in main...%d %d\n",x,y);// 11   20
// }

// int *check(int i, int j){
// int *p, *q;
// p = &i;
// q = &j;
// if(i>=45) return p;
// else return q;
// }
// int main(){
// int *c;
// c = check(10, 20);
// printf("%d",*c);
// return 0;
// }

// int main(){
//     unsigned int var=0x11223344;
//     char *ptr=&var;
//     printf("%x\n",*ptr++);//44
//     printf("%x\n",++*ptr);//34
//     printf("%x\n",*++ptr);//22
//     printf("%x\n",--*ptr);//21
//     printf("%x\n",*ptr--);//21
//     printf("%x\n",var);//112113444
// }

// void fun1(int var){
//     printf("%x\n",var);
// }
// void fun2(int *ptr){
//     printf("%x\n",*ptr);
// }
// int main(){
//     float f=23.4;               
//     fun1(f);
//     fun2(&f);
// }

int main() {
    unsigned int x = 0x12345678;
    unsigned char *ptr = &x;

    if (*ptr == 0x78)
        printf("CPU is Little Endian\n");
    else
        printf("CPU is Big Endian\n");

    return 0;
}


