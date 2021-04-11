#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//int main() {
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

		//所谓单目操作符:就是只有一个操作数 
		// 所谓的双目操作符:有两个操作数,如+,
	//单目操作符:!(反),-(负),+(正),&(取地址符号),*p(解引用操作符)sizeof(计算所在空间的大小,字节),~(按位(二进制)取反),
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
	/*int s = 0;
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

*/



//	return 0;
//注意一下区别:sizeof计算空间的大小,其中里面的运算不会真实的运算,记录在案.
//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof( s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}
//按位取反:~针对的是补码,而且整数,0的源码,反码,补码都是相同的
//补码:00000000000000000000000000000000
//取反所得补码结果11111111111111111111111111111111
//之后源码:1000000000000000000000000001
//int main() {
//	int s = 0;
//				
//	printf("%d\n", ~s);
//	return 0;
//}

//小案例:
//int main() {
//	int a = 11;
//	printf("%d\n", a);
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//区分:++,--
//a++:先使用后加加
//++a:先加加,后使用
//int main() {
//	int a = 3;
//	printf("%d\n", ++a);//4
//	return 0;
//}
//int main() {
//	int a = 12;
//	int s = a++;
//	printf("%d\n", s);//12
//	printf("%d\n", s);//12
//	return 0;
//}
//1. *;间接访问操作符
//2.():强制类型转换,如下.
//int main() {
//	int a =(int) 3.14;
//	printf("%d\n", a);
//	return 0;
//	
// }
//
//小案例2:存放指针的大小,64位则8个字节空间,32位则4个字节空间
//void text(int* n) {
//	printf("%d\n", sizeof(n));//8
//}
//void text1(char* m) {
//	printf("%d\n", sizeof(m));//8
//}
//int main() {
//	int arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	printf("%d\n", sizeof(arr1));//40
//	printf("%d\n", sizeof(arr2));//10
//	text(arr1);
//	text1(arr2);
//
//	return 0;
//}
//

//关系运算符:>,>=,<,<=,!=(不等于),==(等于)
//逻辑运算符:&&(与),||(或)
//int main() {
//	int a = 34;
//	int b = 12;
//	int c = a && b;
//	printf("%d\n", c);//1:都为真结果就为真(1)
//
//	return 0;
//}
//int main() {
//	int i = 0, a = 0, b = 1, c = 2, d = 3;
//	//i = a++ && ++b && d++;
//	//printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1,1,2,3
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1,2,2,3
//	return 0;
//}
//条件运算符:(三目运算符)
//语法:
//exp1?exp2:exp3
//小项目:
//int main() {
//	int s = 2;
//	int a = (s > 12 ? s + 1 : s - 1);
//	printf("%d\n", a);
//	return 0;
//}
//逗号表达式;从左向右依次计算,最后依次的结果作为返回值
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = a + b, a, b = a + 1);//4
//	printf("%d\n", c);
//	return 0; 
//}
//下标引用操作符:[]
//int main() {
//	int a[10] = { 0 };
//	a[2] = 3;
//
//
//	return 0;
//}
//函数调用操作符:()
//int sum(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//
//}
//int main() {
//	int a = 9;
//	int s = 23;
//	int w =sum(a, s);//函数调用操作符;()
//	
//
//	printf("%d\n", w);
//	return 0;
//}
//

//创建结构体类型:
//struct ss {
//	char name[20];//结构体成员
//	int age;
//	int studynumber;
//};
//int main(){
//	struct ss a = { "小米",34,1900011759 };//赋值进去
//	printf("%s\n",a.name);
//	struct ss* ps = &a;
//	printf("%s\n", ps->name);
//	//->:结构体指针操作符
//	printf("%d\n", (*ps).age);
//	return 0;
//}

//表达式求值;
//(1):隐式类型转换:偷偷的计算在内
//	整形提升:不足4个字节的类型都会:char,short 
//int main() {
//	char a = 3;
//	//00000000	00000000	00000000	00000011
//	//通过截断
//	//a; 00000011 实际存的方式
//	printf("%d\n", a);
//	char b = 127;
//	//00000000	00000000	00000000	01111111
//	//b:011111111 实际存的方式
//	char s = 383;
//	printf("s=%d\n", s);
//	char c = a + b;
//	//如何相加:通过整型提升
//	//a:	00000000	00000000	00000000	00000011
//	//b:	00000000	00000000	00000000	01111111
//	//c:	00000000	00000000	00000000	10000010
//	
//	//c:10000010
//	//c:11111111	11111111	11111111 10000010 补码(注意补的套路)
//	//c:11111111	11111111	11111111	10000001 反码
//	//c:10000000	00000000	00000000	011111110 源码
//	//-126
//	printf("%d\n", c);
//
//	return 0;
//}
//运算符的优先级:类似数学的计算顺序
//注意:一些问题表达式,计算的路径不确定,结果就会出现不同
//如:
//int s = a * b + a * c + d * p;
//c+--c;
//int i =1;
//要求:必须是唯一的计算路径
int main() {
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);//不同的编辑器,结果不同
	return 0;
}



















