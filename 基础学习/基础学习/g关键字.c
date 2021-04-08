#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	//(1).给关键字取别名:typeof
//	typedef unsigned int u;
//	u b = 23;
//	printf("%d\n", b);
//	return o
//		0
//}

	//static 关键字
	//(1.)static 修饰局部变量,改变生命周期,使局部变量具有记忆功能

//void text() {
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//	int main() {
//		int i = 0;
//		while (i<5) {
//			text();
//			i++;
//
//		}
//		return 0;
//	}
//
//
//
//(2.)static 修饰全局变量,从此不可以跨文件使用了:
//static int t = 567;
//(3.)static 修饰外文件函数时,此时就不可以跨文件使用
//static int ass(int x,int y) {
//
//
//}
//关键字:define  定义常量和宏
//定义宏:
//语法:
//#define 名字(参数1,参数2)(表达式);
//如下;
//int main() {
//	int s = 5;
//	int t = 7;
//	int r = 0;
//#define max( x, y)(x>y?x:y);
//#define ass(x,y)(s+y);
//	int u = ass(s, t);
//	 r = max(s, t);
//	 printf("%d\n", u);
//
//	
//	return 0;
//}
//


