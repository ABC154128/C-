#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//��򵥵ĵݹ�;����������ñ���
// �ݹ������:
// @1.������������
// @2.ÿ�εݹ��,Խ��Խ�ӽ���������
//int main() {
//	printf("hello world|n");
//	main();
//
//	return 0;
//С��ϰ:��������ֵ(�޷���),����˳���ӡ����ÿһλ,����:1234(�ص����)
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main() {
//	puts("������һ������");
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}
//С��ϰ2:��д��������������ʱ����,���ַ����ĳ���,
//����1
//int my_strlen(char* n) {
//	int count = 0;
//	while (*n!='\0') {
//		count++;
//		n++;
//
//	} 
//	return count;
//}
//����2:
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
	int a = my_strlen(s);//ע�����鴫��,������������,������Ԫ�صĵ�ַ,
						//������ָ�����������.
	printf("len=%d\n", a);
	return 0;
}




