#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和。
//int DigitSum(int n)
//{
//	int ret = 0;
//	int i = 0;
//	if (n != 0)
//	{
//		i = n % 10;
//		n = n / 10;
//		ret = i + DigitSum(n);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个非负整数：\n");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("组成它的数字之和是:%d\n", ret);
//	return 0;
//
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
//	char p[15];
//	printf("请输入一个字符串:\n");
//	scanf("%s", p);    //字符串的输入不用&，直接用数组名
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//循环实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char p[15];
//	printf("请输入一个字符串:\n");
//	scanf("%s", p);    //字符串的输入不用&，直接用数组名
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

// 用递归的方法编写一个函数 reverse_string(char * string)实现：将参数字符串中的字符反向排列。
//void reverse_string(char * string)
//{
//	if (*(++string) != '\0')
//	{
//		reverse_string(string);
//	}
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char p[15];
//	printf("请输入一个字符串:\n");
//	scanf("%s", p); //字符串的输入不用&，直接用数组名
//	char n = reverse_str(p);
//	printf("%s\n", n);
//	return 0;
//}


//递归实现求n的阶乘 
//int fan(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//    else 
//		return n*fan(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fan(n);
//	printf("%d\n", ret);
//	return 0;
//}

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

//递归方式实现打印一个整数的每一位
//void print(int x)
//{
//	if (x > 9)
//	{
//	 print(x/10);
//	}
//	printf("%d \n", x % 10);	
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入一个非负整数：\n");
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}

//编写一个函数实现n^k，使用递归实现。
//int mi(int x, int y)
//{
//	if (y <= 0)
//		return 0;
//	else if (x == 1)
//		return 1;
//	else if (y == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * mi(x, y - 1);
//	}
//
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", n, k)
//	printf("%d\n",mi(n, k));
//	return 0;
//}