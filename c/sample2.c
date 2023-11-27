/*
题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。

*/

#include<stdio.h>
int main()
{
    double I;
    double bonus;
    printf("你的净利润是：\n");
    scanf("%lf",&I);
    if (I <= 100000){
        bonus = I * 0.1;
    }
    else if (I <= 200000){
        bonus = 100000*0.1 + (I-100000)*0.075;
    }
    else if (I <= 400000){
        bonus = 100000*(0.1+0.075) + (I-2000000)*0.005;
    }
    else if (I <= 600000){
        bonus = 100000*(0.1+0.075) + 200000*0.005 + (I-400000)*0.003;
    }
    else if (I <= 1000000){
        bonus = 100000*(0.1+0.075) + 200000*0.005 + 400000*0.003 + (I-600000)*0.0015;
    }
    else{
        bonus = 100000*(0.1+0.075) + 200000*0.005 + 400000*0.003 + 400000*0.0015 + (I-1000000)*0.001;
    }
    printf("提成 = %lf\n",bonus);

}