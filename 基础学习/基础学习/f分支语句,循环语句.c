#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h >
//分支语句: if, Switch
//循环语句 : while; for;do while 
//
//语法:
//if (表达式1) {
//	语句1;
//	
//}
//else if (表达式2) {
//	语句2;
//
//}
//else if (表达式3) {
//	语句3;
//}
//else {
//	语句4;
//	return x;
//
//}
//注意:在C语音中如何表示真,假?
//			0表示假
//			非0表示真
//
//实例:输出100 以内的奇数

//int main() {
//	int s = 0;
//	while (s < 100) {
//		if (s % 2 == 1) {
//			printf("%d\n", s);
//		}
//		s++;
//	}
//
//	return 0;
//
//
//}
//switch语句:小实例
//
//int main() {
//	int s;
//	scanf("%d", &s);
//	switch (s) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("周末");
//		break;
//	}
//	return 0;
//}
//while()语法:
//小例子:
//int main() {
//	int s = 0;
//	while (s < 90) {
//		printf("%d\n", s);
//		s++;
//	}
//	return 0;
//}
//总结:循环语句:
//	break:跳出循环
//	continue:在while,do while 中:则为不往下执行,死循环
//			在for中,则跳过此次循环

//
//小李子:死循环
int s = 34;
//int main() {
//	int s = 0;
//	while (s < 34) {
//		if (s == 3) {
//
//			
//			continue;
//		}
//		printf("%d\n", s);
//
//		s++;
//	}
//	return 0;
//
//}