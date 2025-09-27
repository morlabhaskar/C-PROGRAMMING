// #include<stdio.h>
// int main(){
    // int arr[5],n=5;
    // printf("Enter %d Array Elements :\n",n);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf("Array Elements are :\n");
    // for(int i=0;i<n;i++){
    //     printf("%d\t",arr[i]);
    // }

    
// }

// #include<stdio.h>
// #include<stdlib.h>
//  int main()
//  {
//     printf("%d\n",getpid()); //process id
//  }

#include<stdio.h>
 #include<stdlib.h>
 int main()
 {
        srand(getpid()); // srand(seed)
        int num;
        num=rand()%10;
        printf("%d\n",num);
 }
