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
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//printf("玩游戏\n");
}
void test()
{
	int input = 0;
	//打印一个菜单
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
     } while (input);

}
int main()
{
	test();
	return 0;
}