/*
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

程序分析：(a>b)?a:b这是条件运算符的基本例子。*/

#include<stdio.h>

int main(){
    int score = 0;
    char grade;
    printf("请输入分数：");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("该同学的分数等级为：%c\n",grade);
    return 0;
}