#define  _CRT_SECURE_NO_WARNINGS 1
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和。

#include<stdio.h>
//void DigitSum(int x)
//{
//	if (x > 9)
//	{
//		DigitSum(x/10);
//	}
//	printf("%d \n", x % 10);
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入一个非负整数：\n");
//	scanf("%d", &input);
//	DigitSum(input);
//	return 0;
//}

//递归实现strlen
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else 
//		return  1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char *p="0";
//	printf("请输入一个字符串:\n");
//	scanf("%s", &p);
//	int len=my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//递归实现求n的阶乘 

int fan(int n)
{
	if (n <= 1)
		return 0;
	else
		return n*fan(n - 1);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d\n", &n);
	ret = fan(n);
	printf("%d\n", ret);
	return 0;
}

//循环实现求n的阶乘 
//int main()
//{
//	int i, n;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum*i;
//	printf("%d!=%d", n, sum);
//	printf("\n");
//	return 0;
//}


//用循环求斐波那契数列的第n项
//int main()
//{
//	int n, num;
//	int f1, f2;
//	num = 0;
//
//	f1 = 1;
//	f2 = 1;
//	scanf("%d", &n);
//	if (n <= 0)
//		printf("请重新输入\n");
//	else if (n == 1 || n == 2)
//		num = 1;
//	else while (n >= 3)
//	{
//		num = f1 + f2;
//		f1 = f2;
//		f2 = num;
//		n--;
//	}
//
//	printf("%d\n", num);
//	return 0;
//}


//用递归求斐波那契数列的第n项

//int Fibonacci(int n){
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fibonacci(n));
//}
//
