#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//最简单的递归;函数本身调用本身
// 递归的条件:
// @1.存在限制条件
// @2.每次递归后,越来越接近限制条件
//int main() {
//	printf("hello world|n");
//	main();
//
//	return 0;
//小练习:接受整形值(无符号),按照顺序打印它的每一位,例如:1234(重点理解)
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main() {
//	puts("请输入一个数字");
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}
//小练习2:编写函数不允许创建临时变量,求字符串的长度,
//方法1
//int my_strlen(char* n) {
//	int count = 0;
//	while (*n!='\0') {
//		count++;
//		n++;
//
//	} 
//	return count;
//}
//方法2:
int my_strlen(char* n) {
	if (*n != '\0') {
		return 1 + my_strlen(n + 1);
	}
	else {
		return 0;
	}
}

int main() {
	char s[] = "bitgggsg";//bit\0
	int a = my_strlen(s);//注意数组传参,不是整个数组,而是首元素的地址,
						//可以用指针类型来解决.
	printf("len=%d\n", a);
	return 0;
}




