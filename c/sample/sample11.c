/*
题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
*/

#include<stdio.h>

int main()
{
    int Month1 = 1;
    int Month2 = 1;
    int i;
    for (i=1;i<20;i++)
    {
        printf("%12d%12d",Month1,Month2);
        if(i%2 == 0)
        {
            printf("\n");
        }
        Month1 += Month2;
        Month2 += Month1;
    }
    return 1;

}