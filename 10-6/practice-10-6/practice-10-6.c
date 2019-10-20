#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
void table(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int sum = i * j;
			printf("%d*%d=%d\t", i, j, sum);// \t水平制表符
		}
		printf("\n");
	}
}

int main()
{
	int s = 0;
	printf("请输入乘法表的行数:>");
	scanf("%d", &s);
	table(s);
	system("pause");
	return 0;
}

//使用函数实现两个数的交换
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	y = x;
//	y = tmp;
//}
//void swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap1(a, b);
//	printf("swap1:a=%d b=%d\n", a, b);
//	swap2(&a, &b);
//	printf("swap2:a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//实现一个函数判断year是不是润年
//#include<stdio.h>
//#include<stdlib.h>
//int is_gap_year(int *i)
//{
//	if (((*i % 4 == 0) && (*i % 100 != 0)) || (*i % 400 == 0))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		int year = 0;
//		printf("请输入年份\n");
//		scanf("%d", &year);
//		is_gap_year(&year);
//	}
//	return 0;
//}


//int is_leap_year(int x)
//{
//	if (x % 4 == 0)
//	{
//		if (x % 100!=0)
//		{
//			return 1;
//		}
//	}
//	if (x % 400 == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year (i)== 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




//创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置


//void init(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);//arr[sz] = '\0';
//	}
//	printf("初始化数组\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void empty(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("清空数组\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int *arr, int sz)
//{
//	int temp = 0, i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//	printf("逆置数组\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void menu()
//{
//	printf("*******************************************\n");
//	printf("****          1、初始化数组            ****\n");
//	printf("****          2、清空数组              ****\n");
//	printf("****          3、数组元素的逆置        ****\n");
//	printf("****          4、退出程序              ****\n");
//	printf("*******************************************\n");
//}
//int main()
//{
//	int *arr;
//	int n = 0;
//	int m = 0;
//	int a = 0;
//	int count = 1;
//	int sz = 0;
//	printf("数组的大小：");
//	scanf("%d", &n);
//	arr = (int *)malloc(n);//动态内存分配，输入n=5，只能输入四个元素，第五个为\0
//	menu();
//
//	while (count)
//	{
//		printf("\n请选择:\n");
//		scanf("%d", &a);
//		printf("\n");
//		switch (a)
//		{
//		case 1:init(arr, n - 1);//n是数组元素个数，包括\0，数组元素下标引用还要减一；
//			count = 1;
//			break;
//		case 2:empty(arr, n - 1);
//			break;
//		case 3:reverse(arr, n - 1);
//			break;
//		case 4:count = 0;
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//		}
//	}
//	system("pause");
//	return 0;
//}



//实现一个函数，判断一个数是不是素数
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <=sqrt( n); i++)
//	{
//		if (n%i == 0)
//		{
//           return 0;
//		}
//		
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

