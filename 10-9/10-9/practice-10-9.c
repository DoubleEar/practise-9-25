#define  _CRT_SECURE_NO_WARNINGS 1
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�͡�

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
//	printf("������һ���Ǹ�������\n");
//	scanf("%d", &input);
//	DigitSum(input);
//	return 0;
//}

//�ݹ�ʵ��strlen
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
//	printf("������һ���ַ���:\n");
//	scanf("%s", &p);
//	int len=my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//�ݹ�ʵ����n�Ľ׳� 

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

//ѭ��ʵ����n�Ľ׳� 
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


//��ѭ����쳲��������еĵ�n��
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
//		printf("����������\n");
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


//�õݹ���쳲��������еĵ�n��

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
