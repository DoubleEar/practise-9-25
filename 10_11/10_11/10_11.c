#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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

//void DigitSum(int x)
//{
//	if (x > 9)
//	{
//	   DigitSum(x/10);
//	}
//	int sum=sum+ x % 10;
//	printf("%d \n", sum);
//	
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


//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d \n", x % 10);
//
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

int mi(int x, int y)
{
	if (y <= 0)
		return 0;
	else if (x == 1)
		return 1;
	else if (y == 1)
	{
		return x;
	}
	else
	{
		return x * mi(x, y - 1);
	}


}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", n, k);
	printf("%d\n", mi(n, k));
	return 0;
}