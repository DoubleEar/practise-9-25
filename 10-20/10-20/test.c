//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int min(int x, int y)
//{
//	int tmp = 0;
//	if (x>y)
//	{
//		x = y;
//		tmp = x;
//		y = tmp;
//	}
//	return x;
//}
//int GongBeiShu(int x, int y)
//{
//	unsigned int i = 0;
//	unsigned int j = 0;
//	unsigned int ret = 0;
//	while (1)
//	{
//		if ((i /x) == 0 && (i / y) == 0)
//		{
//			j = i;
//			ret = j;
//			break;
//		}
//		min(j, ret);
//	}
//
//}
//int main()
//{
//	unsigned int a = 0;
//	unsigned int b = 0;
//	unsigned int ret = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		ret = GongBeiShu(a, b);
//	}
//	printf("%d ", ret);
//	return 0;
//}
//

#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	char ret[20] = { 0 };
	while (gets(input) != NULL)
	{
		int len = strlen(input);
		int i = len - 1;
		while (i)
		{
			printf("%c", input[i]);
				i--;
		}
	}
	
	return 0;
}