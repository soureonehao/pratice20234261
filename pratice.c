#include<stdio.h>
void main() {
	int a1, a2;	//������������
	int *pa1 = &a1, *pa2 = &a2;	//����ָ�����
	printf("input a1, a2:");
	scanf_s("%d%d", pa1, pa2);
	if (*pa1 > *pa2)	//�ж���ֵ��С
		printf("%d %d", *pa1, *pa2);
	else
		printf("%d %d", *pa2, *pa1);
}