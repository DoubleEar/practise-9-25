#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������������С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	scanf("%d %d", &a, &b);
//	while (((a*i)%b) != 0)
//	{
//		i++;
//	}
//	printf("%d\n",a*i);
//	return 0;
//}

//ʵ���ַ����ĵ���
//I like Beijing        gnijieB ekil I       Beijing like I
#include<string.h>
void reverse(char*start, char*end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
//int main()
//{
//	char input [20] = { 0 };
////������scanf,scanf�����ո�һ������ͽ�����
//	gets(input);
////��ת��������
//	reverse(input, input + strlen(input) - 1);
////��ת����
//	char*start = input;
//	while (*start)
//	{
//		char*end = start;
//		while (*end != ' '&& *end)
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end)
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", input);
//
//	return 0;
//}


//쳲���������
//int cnt = 0;
//int fib(int n){
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//}
//
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//90 �ӷ������ȼ�����*=
//	printf("%d\n",k);
//	return 0;
//}

//#include<stdlib.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);//1 ��test �������ڽ��� 
//	return 0;
//}

int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; (y = 123) && (x<4); x++);
	printf("%d\n", x);//ѭ�����Ĵ�
	return 0;
}