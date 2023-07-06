//输出1-100之间的奇数
#include<stdio.h>
int main() {
	for (int i = 0; i < 100; i++) {//for循环取i值
		if (i % 2 == 1) {//取余为1则为奇数
			printf("%d\n", i);//打印i值
		}
	}
}