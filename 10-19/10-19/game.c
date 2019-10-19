#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			count--;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row ; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y + 1] +
		mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] - 8 * '0';

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win <row*col - EASY_COUNT)
	{
		printf("请输入你要排查的雷：\n");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, ROW , COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, ROW ,COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win==col*row - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
	}
}