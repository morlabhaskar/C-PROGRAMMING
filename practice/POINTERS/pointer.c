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

int main() {
    int i1=520,i2=0;
    float f1=23.4,f2=0.0;
    char *ptr;
    ptr=&i1;
    i2=*ptr;//i2=*(int*)ptr;
    ptr=&f1;
    f2=*ptr;//f2=*(float*)ptr;
    printf("i2=%d f2=%f\n",i2,f2); //
}


