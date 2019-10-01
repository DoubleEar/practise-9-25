#define  _CRT_SECURE_NO_WARNINGS 1
//////编写程序数一下1到100的所有整数中出现多少次数字9
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//在荧幕上输出一个用*组成的菱形(下半部分）
#include<string.h>
//int main()
//{
//	char arr1[] = "**************************";
//	char arr2[] = "            *             ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int i = 6;
//
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}
//在荧幕上输出一个用*组成的菱形
int main()
{
	int line = 0;
	scanf("%d", &line);
	//上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i <line - 1; i++)
	{
		//打印一行
		int j = 0;
		//打印空格
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//求出0～999之间的所有“水仙花数”并输出
//int main()
//{
//	int a, b, c;
//	int count = 0;
//	int i = 100;
//	for (i =100; i < 1000; i++)
//		     {
//		//提取整数的个位数字
//		a = i % 10;
//		//提取整数的十位数字
//		b = (i / 10) % 10;
//		//提取整数的百位数字
//		c = (i / 100) % 10;
//		          if (i == a*a*a + b*b*b + c*c*c)
//			        {
//			             count++;
//			             printf("%d\n", i);
//			         }
//		    }
//	     printf("count=%d", count);
//	
//	         return 0;
//	 }

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int i;
//	int sum = 0;
//	int ret = 0;
//	int j = 0;
//    printf("请输入一个数字\n");
//	scanf("%d", &i);
//	for (j = 0; j <5; j++)
//	{
//		ret = i + 10 * ret;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}