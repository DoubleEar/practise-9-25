#define  _CRT_SECURE_NO_WARNINGS 1
//��д������һ��1��100�����������г��ֶ��ٴ�����9
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

//��ӫĻ�����һ����*��ɵ�����
//#include<string.h>
//int main()
//{
//	char arr1[] = "**************************";
//	char arr2[] = "            *             ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	int i = 6;
//	while (i <= 6)
//	{
//		arr2[left] = 6;
//		arr2[right] = 6;
//		left--;
//		right++;
//		printf("*\n");
//	}
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

//���0��999֮������С�ˮ�ɻ����������
//int main()
//{
//	int a, b, c;
//	int count = 0;
//	int i = 100;
//	for (i =100; i < 1000; i++)
//		     {
//		//��ȡ�����ĸ�λ����
//		a = i % 10;
//		//��ȡ������ʮλ����
//		b = (i / 10) % 10;
//		//��ȡ�����İ�λ����
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

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
int main()
{
	int i;
	int sum = 0;
	int ret = 0;
	int j = 0;
	printf("������һ������\n");
	scanf("%d", &i);
	for (j = 0; j <5; j++)
	{
		ret = i + 10 * ret;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}