#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("********************\n");
	printf("**** 1.  play   ****\n");
	printf("**** 0.  exit   ****\n");
	printf("********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//printf("����Ϸ\n");
}
void test()
{
	int input = 0;
	//��ӡһ���˵�
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
     } while (input);

}
int main()
{
	test();
	return 0;
}