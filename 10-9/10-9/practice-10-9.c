#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�͡�
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
//	printf("������һ���Ǹ�������\n");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("�����������֮����:%d\n", ret);
//	return 0;
//
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
//	char p[15];
//	printf("������һ���ַ���:\n");
//	scanf("%s", p);    //�ַ��������벻��&��ֱ����������
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//ѭ��ʵ��strlen
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
//	printf("������һ���ַ���:\n");
//	scanf("%s", p);    //�ַ��������벻��&��ֱ����������
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

// �õݹ�ķ�����дһ������ reverse_string(char * string)ʵ�֣��������ַ����е��ַ��������С�
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
//	printf("������һ���ַ���:\n");
//	scanf("%s", p); //�ַ��������벻��&��ֱ����������
//	char n = reverse_str(p);
//	printf("%s\n", n);
//	return 0;
//}


//�ݹ�ʵ����n�Ľ׳� 
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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	printf("������һ���Ǹ�������\n");
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�֡�
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