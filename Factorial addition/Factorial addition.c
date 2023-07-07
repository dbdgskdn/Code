//计算1！+2！+3！...+10!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum = 0;//初始化最终值sum
	int num=1;//初始化阶乘值
	for (int i = 1; i <= 10; i++) {//此层for循环表示1-10
		num = num * i;
		sum = sum + num;
		
	}
	printf("%d", sum);
	return 0;
}