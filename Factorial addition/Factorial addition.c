//����1��+2��+3��...+10!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum = 0;//��ʼ������ֵsum
	int num=1;//��ʼ���׳�ֵ
	for (int i = 1; i <= 10; i++) {//�˲�forѭ����ʾ1-10
		num = num * i;
		sum = sum + num;
		
	}
	printf("%d", sum);
	return 0;
}