#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//知识点:
//for (表达式1; 表达式2; 表达式3) {
//	循环语句;
//}
//int main() {

	//第一种:for循环的嵌套,一共会循环100次
//	int i = 0;
//	for (i = 1; i < 10; i++) {
//		int  j = 0;
//		for (j = 0; j < 10; j++) {
//			printf("hello word\n");
//		}
//		
//	}
//
//	return 0;
//
//}
	//第二种:for 循环的变种;一共循环5次
//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 12 && y < 5; x++, y++) {
//		printf("hello word\n");
//	}
//	return 0;
//}
//
//
//
// 第三种变形:死循环
//int main() {
//	for(;;) {
//		printf("hello word\n");
//	}
//	return 0;
//}
//另外一种循环:do...while.....
//int main() {
//	int s = 0;
//	do {
//		printf("hello word\n");
//		s++;
//	} while (s < 12);
//	return 0;
//}


//跳过循环:没有5了
//
//int main() {
//	int s = 0;
//	for (s; s < 12; s++) {
//		if (s == 5) {
//			continue;
//		}
//		printf("%d\n", s);
//	}
//	return 0;
//
//}
//循环数组;
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10
//
//	};
//	int s = 0;
//	for (s; s < 10; s++) {
//		printf("%d\n", arr[s]);
//	}
//	return 0;
//}

