#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
void table(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int sum = i * j;
			printf("%d*%d=%d\t", i, j, sum);// \tˮƽ�Ʊ��
		}
		printf("\n");
	}
}

int main()
{
	int s = 0;
	printf("������˷��������:>");
	scanf("%d", &s);
	table(s);
	system("pause");
	return 0;
}

//ʹ�ú���ʵ���������Ľ���
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

//ʵ��һ�������ж�year�ǲ�������
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
//		printf("���������\n");
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




//����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص�����


//void init(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);//arr[sz] = '\0';
//	}
//	printf("��ʼ������\n");
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
//	printf("�������\n");
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
//	printf("��������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void menu()
//{
//	printf("*******************************************\n");
//	printf("****          1����ʼ������            ****\n");
//	printf("****          2���������              ****\n");
//	printf("****          3������Ԫ�ص�����        ****\n");
//	printf("****          4���˳�����              ****\n");
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
//	printf("����Ĵ�С��");
//	scanf("%d", &n);
//	arr = (int *)malloc(n);//��̬�ڴ���䣬����n=5��ֻ�������ĸ�Ԫ�أ������Ϊ\0
//	menu();
//
//	while (count)
//	{
//		printf("\n��ѡ��:\n");
//		scanf("%d", &a);
//		printf("\n");
//		switch (a)
//		{
//		case 1:init(arr, n - 1);//n������Ԫ�ظ���������\0������Ԫ���±����û�Ҫ��һ��
//			count = 1;
//			break;
//		case 2:empty(arr, n - 1);
//			break;
//		case 3:reverse(arr, n - 1);
//			break;
//		case 4:count = 0;
//			break;
//		default:
//			printf("����������������룺\n");
//		}
//	}
//	system("pause");
//	return 0;
//}



//ʵ��һ���������ж�һ�����ǲ�������
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

