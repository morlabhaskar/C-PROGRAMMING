#include<stdio.h>
int main(){
    short int s1=0,s2=0;   //2 bytes  range : -2^15 to +2^15 -1
    unsigned short int u1=0,u2=0;  //2 bytes  and only positive numbers   range : 0 to 2^16 -1     , 0 to 65535
    printf("s1=%hd s2= %hd\n",s1,s2);    //0   0 
    printf("u1=%hu u2=%hu\n",u1,u2);     // 0   0
    s2=s1-1;   // s2 = -1
    u2 = u1-1;   // u2  = -1
    printf("s1=%hd s2= %hd\n",s1,s2);   // 0    -1
    printf("u1=%hu u2=%hu\n",u1,u2);    //  0    65535     outoff range so max number of range

}



//output :
// s1=0 s2= 0
// u1=0 u2=0
// s1=0 s2= -1
// u1=0 u2=65535