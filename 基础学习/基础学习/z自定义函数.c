#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//参数分为2种;形参
//			实参
//
//重点:
//1.函数的嵌套使用
//2.链式访问:
//3.函数的声明,放.h文件种
//如下:
//#ifndef __ADD_H__
//#define __ADD_H__
//int add(int x, int y);
//#endif
// 
//如何引入头文件:
//#include ""add.h"
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
////比较两个数的大小
//int getmax(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//
//}
//int main() {
//	int t;
//	int y;
//
//	scanf("%d%d", &t, &y);
//
//
//	int max = getmax(t, y);
//	printf("%d", max);
//
//
//	return 0;
//};
//
//
////"没有办法交位置"
//void bb(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//
//
//int main() {
//	int s = 23;
//	int d = 34;
//	bb1(s, d);
//	printf("%d\n", s);
//	printf("%d\n", d);
//}
////如果用指针的方式,就可以解决问题;
////void无返回值
//void bb1(int* x, int* y) {
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main() {
//	int s = 0;
//	int  e = 0;
//	scanf("%d%d", &s, &e);
//	bb1(&s, &e);
//	printf("%d\n", s);
//	printf("%d\n", e);
//	return 0;
//}


