#include <stdio.h>
// union A{
//     struct st1{
//         char c;  // 1
//         char ch; // 1
//     } s1;
//     struct st2{
//         char c[2];  // 2
//         char ch[2]; // 2
//     } s2;
//     struct st3{
//         short int x; // 2
//         short int y; // 2
//     } s3;
// } v = {12, 1, 15, 1,14,2};
// main(){
//     printf("%d\n", sizeof(v));//4
//     printf("%d\n", sizeof(v.s1));//2
//     printf("%d\n", sizeof(v.s2));//4
//     printf("%d\n", sizeof(v.s3));//4
//     printf("%d %d\n", v.s1.c,v.s1.ch);//12 1
//     printf("%d %d\n", v.s2.c,v.s2.ch);//garbage garbage
//     printf("%d %d\n", v.s3.x,v.s3.y);//268 0
// }

// union A{
//     struct st1{
//         char c[2];  // 2
//         char ch[2]; // 2
//     } s1;
//     struct st2{
//         short int x; // 2
//         short int y; // 2
//     } s2;
// } v = {12, 1, 15, 1};
// main(){
//     printf("%d\n", v.s2.x);//268
//     printf("%d\n", v.s2.y);//271
//     v.s2.x = 1026;
//     v.s2.y = 513;
//     printf("%d\n", v.s1.c[0]);//2
//     printf("%d\n", v.s1.c[1]);//4
//     printf("%d\n", v.s1.ch[0]);//1
//     printf("%d\n", v.s1.ch[1]);//2
//     printf("%d\n", v.s2.x);//1026
//     printf("%d\n", v.s2.y);//513
// }
