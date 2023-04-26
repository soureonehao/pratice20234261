#include<stdio.h>
void main() {
	int a1, a2;	//定义整数变量
	int *pa1 = &a1, *pa2 = &a2;	//定义指针变量
	printf("input a1, a2:");
	scanf_s("%d%d", pa1, pa2);
	if (*pa1 > *pa2)	//判断数值大小
		printf("%d %d", *pa1, *pa2);
	else
		printf("%d %d", *pa2, *pa1);
}