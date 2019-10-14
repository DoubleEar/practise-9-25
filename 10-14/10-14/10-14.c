#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//单目操作符
//! 非 逻辑反操作，- 负值，+ 正值，&取地址，sizeof(不是函数）操作数的类型长度，以字节为单位
// ~ 按位取反（包括符号位），-- ++ 前置 后置-- ++ ，*简接访问操作符（解引用操作符), (类型） 强制类型转换
//int main()
//{
//	//!
//	int a = 10;
//	int b = 0;
//	int c = 20;
//	int d = 0;
//	int arr[10] = { 0 };
//	printf("%d\n", !a);//0 
//	printf("%d\n", !b);//1
	//地址：一个字节一个地址,一个地址、指针变量在32位机器是4个字节，一个地址、指针变量在64位机器是8个字节
	//printf("%p\n", &a);
	//printf("%x\n", &a);
	//printf("%p\n", arr); //arr数组首元素的地址
	//printf("%p\n", &arr); //&arr整个数组的地址  
	//&数组名——数组名表示整个数组——这里取出的是整个数组的地址
	//printf("%p\n", arr + 1); //加1到第二个元素
	//printf("%p\n", &arr + 1);//加1到下一个数组
	//sizeof
	//printf("%d\n", sizeof(a));//4 
	//printf("%d\n", sizeof a);//4 a的括号可省 说明sizeof不是函数
	//printf("%d\n", sizeof(int));// 4 （int） 括号不可省略
	//printf("%d\n", sizeof(arr));//40 
	//printf("%d\n", sizeof(int[10]));//40  int [10]指数组的类型
	//printf("%d\n", sizeof(&arr));//4 &arr指的是地址，4个字节
	//printf("%d\n", sizeof(c = a + 5));//4 sizeof内部表达式不参与计算
	//printf("a=%d\n", a);//10
	//printf("c=%d\n", c);//20 
	//sizeof(数组名）——数组名表示整个数组，计算的是整个数组的长度，单位是字节
	//&数组名——数组名表示整个数组——这里取出的是整个数组的地址
	//只有这两种情况arr指的是整个数组，其余情况arr都是首元素地址
	//~ 按位取反（包括符号位）
	//printf("%d\n", ~d);//-1 0按位取反全是1
	//system("pause");
	//return 0;
//}
//++ --
//int main()
//{
//	int a = 10;
//	int m = 20;
//	int b = 0;
//	int n = 0;
	//b = a++;//先将a赋给b,a再加1  对于整型 前置比后置效率高
	//n = ++m;//先将m+1赋给n,
	//printf("a=%d b=%d\n", a, b);//11 10
	//printf("m=%d n=%d\n", m, n);//21 21
	//system("pause");
//}
//* 解引用操作
//int main()
//{
//	int a = 10;
//	int *p = &a;
	//*p = 20;//这里的*指的是解引用操作
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));// 4  数组传参传的是地址
//
//
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4  数组传参传的是地址
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	test1(arr);
//	test2(ch);
//	system("pause");
//	return 0;
//}


//逻辑操作符
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++&&++b&&d++;
//	//i=a++&&++b&&d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//	printf("%d", c);
//	return 0;
//}

//函数调用
//void test()
//{
//	printf("hehe\n");
//}
//void test(const char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();
//	test2("hello");
//	return 0;
//}

//结构成员
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;
}
void set_age2(struct Stu*pStu)
{
       pStu->age = 18;
}
int main()
{
	struct Stu stu;
	struct Stu*pStu = &stu;
	stu.age = 20;
	set_age1(stu);
	pStu->age = 20;
	set_age2(pStu);
	return 0;
}