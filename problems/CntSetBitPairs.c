
#include <stdio.h>
void printBinary(int);
int main()
{
    int data, bit, cnt;
    printf("Enter an integer:");
    scanf("%d", &data);
    printBinary(data);
    cnt = 0;
    bit = 31;
    while (bit > 0)
    {
        if ((data >> bit) & 1)
            if (((data >> (bit - 1)) & 1))
            {
                cnt++;
                bit--;
            }

        bit--;
    }

    printf("the number of set pairs:%d\n", cnt);
    return 0;
}

void printBinary(int var)
{
    int bit = 31;
    printf("data=%d:", var);
    while (bit >= 0)
    {
        printf("%d", (var >> bit) & 1);
        --bit;
    }
    printf("\n");
    return;
}