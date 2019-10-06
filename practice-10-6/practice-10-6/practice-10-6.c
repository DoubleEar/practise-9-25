#define  _CRT_SECURE_NO_WARNINGS 1
//使用函数实现两个数的交换。 
//#include<stdio.h>
//#include<stdlib.h>
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
#include<stdio.h>
#include<stdlib.h>
int isgapyear(int *i)
{
	if (((*i % 4 == 0) && (*i % 100 != 0)) || (*i % 400 == 0))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
int main()
{
	while (1)
	{
		int year = 0;
		printf("请输入年份\n");
		scanf("%d", &year);
		isgapyear(&year);
	}
	return 0;
}
