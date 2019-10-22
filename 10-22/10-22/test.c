#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数的最小公倍数
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

//实现字符串的倒置
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
////不能用scanf,scanf遇到空格，一次输入就结束了
//	gets(input);
////反转整个句子
//	reverse(input, input + strlen(input) - 1);
////反转单词
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


//斐波拉且数列
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
//	k *= i + j;//90 加法的优先级高于*=
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
//	printf("%d\n", a);//1 出test 生命周期结束 
//	return 0;
//}

int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; (y = 123) && (x<4); x++);
	printf("%d\n", x);//循环了四次
	return 0;
}