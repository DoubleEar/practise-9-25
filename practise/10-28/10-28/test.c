#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a > b)
	{
		if (a > c)
		{
			max = a;
		}
		else 
		 {
			max = c;
		 }
	}
  else 
  {
	 if (b > c) 
	 {
		 max = b;
	 }
	 else 
	 {
		 max = c;
	 }
 }
	printf("%d %d\n", max);
	return 0;
}