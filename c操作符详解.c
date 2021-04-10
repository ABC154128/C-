#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
int main() {
	//算术操作符:+,-,*,/(除法得到的是商),%(得到的是余数)
	//int s = 2;
	//printf("%d\n", s%2);//0
	////移位操作符:针对二进制的1左右移动:>>,<<

	//int a =  -12;l
	//int y = 0;

	//int t = a >>1;//如果需要打印出移动后的,需要吧他存起来才行
	// //y>> -1;// 此行为,电脑都不支持,

	//printf("%d\n", t);
	//位操作符:
	//注意:针对的是正数,两个整数上下对应的二进制位
		/*&:按位与,一假则假
		|:按位或,一真则真
		//^:按位非*/ /*相反*//*:*//*11得0,其他得1*/
	/*int s = 2;
	int a = 5;
	int t = s & a;
	printf("%d\n", t);*/


	//赋值操作符;=,+=,-=,*=,/=,%=,>>=,<<=,&=,|=,^=

		
	//单目操作符:!(反),-(负),+(正),&(取地址符号),*p(解引用操作符)sizeof(计算所在空间的大小,字节),~(二进制交换),
	/*	int s = 0;

		if (!s) {
			printf("hello word");
	//}*/
	//	int d = 3;
	//	int r = ~d;
	//	printf("%d\n", r);*/
//一道变态面试题:不能创建临时变量,实现两个数的交换
	//方法1;平常法:
	/*int a = 56;
	int b = 34;*/
	//借助第三方变量
	/*int num = s;
	s = r;
	r = num;*/
	
	
//方法2:通过位运算符解决
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d\n", a);
	printf("%d\n", b);*/

//小练习:求出一个数的二进制中有多少个1;
//方法1:比较合理,正负数都合适

	/*int s = 0;
	puts("请输入一个数字");
	scanf("%d", &s);
	int t = 0;
	int count = 0;
	for (t; t < 32;t++) {
		if (1 == (s >> t & 1)) {
			count++;
		}

	}
	printf("%d\n", count);*/
//方法2
	int s = 0;
	int count = 0;
	puts("请输入一个数字");
	scanf("%d", &s);
	while (s) {
		if ((s % 2) == 1) {
			count++;
		}
		s = s / 2;
	}
	printf("%d\n", count);




	return 0;
}
