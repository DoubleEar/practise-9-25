#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S
//{
//	int age;
//	char name[15];
//	char sex[5];
//};
//struct S2
//{
//	int *p;
//	double d;
//	struct S s;
//
//};
//int main()
//{
//	int a = 100;
//	struct S2 s2 = { &a, 3.14, { 18, "zhangsan", "��"} };
//	struct S2*ps = &s2;
//	printf("%d\n",s2.s.age);
//	printf("%d\n", *(s2.p));
//	printf("%d\n", ps->s.age);
//	printf("%d\n", *(ps->p));
//	return 0;
//}
//


//struct S
//{
//	int age;
//	char name[15];
//	char sex[5];
//};
//struct S2
//{
//	int *p;
//	double d;
//	struct S s;
//
//};
//
//void print(struct S2 tmp)
//{
//	printf("%d %lf %d\n", *(tmp.p), tmp.d, tmp.s.age);
//}
//void print2(struct S2*ps)
//{
//	printf("%d %lf %d\n", *(ps->p), ps->d, ps->s.age);
//}
//int main()
//{
//	int a = 100;
//	struct S2 s2 = { &a, 3.14, { 18, "zhangsan", "��" } };
//	struct S2*ps = &s2;
//	print(s2);
//	print2(&s2);//�ṹ�崫�ε�ʱ��Ҫ���ṹ���ַ��
//	return 0;
//}

#include<string.h>
////��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	char arr1[] = "welcome to shanxi";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	printf("%s\n", arr2);
//	/*while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}*/
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}



//ģ���û���¼������ֻ�ܵ�½���Σ�
int main()
{
	char paw[10] = "";
	int i = 0;
	char password[10] = "123456";
	for (i = 0; i <3; i++)
	{
		printf("please input:");
		scanf("%s", paw);
		if (strcmp(paw, "password") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
	return 0;
}