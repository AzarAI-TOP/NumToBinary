/*
 * @Author: AzarAI
 * @Date: 2023-03-06 08:15:09
 * @LastEditors: AzarAI 3420396703@qq.com
 * @LastEditTime: 2023-03-06 08:50:53
 * @FilePath: /NumToBinary/main.c
 */
#include <stdio.h>

int main (void)
{
    int x = 0;
    printf("Please input your number:");
    scanf("%d", &x);

    int pos = 8*sizeof(x)-1;
    while (pos>=0){
        printf("%d", (x & (1<<pos)) ? 1 : 0);
        pos--;
        if ((pos+1) % 8 == 0) printf(" ");
    }
    printf("\n");

    printf("The number you input is :%d\n", x);



    return 0;
}
