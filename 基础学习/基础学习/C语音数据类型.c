#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常用的数据结构:
//char  1
//short 2
//int   4
//long  4 / 8
//long long 8
//float 4
//double 8
//
//用法:
//int s = 34;
//char s = "w";
//float u = 34.1;

//注意:全局变量定义在mian 函数的上面
//全局变量可以跨文件使用:需要用extern声明使用
//
//int main() {
//	extern int s;
//	printf("%d", s);
//	return 0;
//}
//变量的使用实例:
//int main() {
//	int s = 0;
//	int d = 0;
//	int sum = 0;
//	puts("请输入两个数字相加");
//	scanf("%d%d", &s, &d);
//	sum = s + d;
//	printf("%d\n", sum);
//	return 0;
//}

