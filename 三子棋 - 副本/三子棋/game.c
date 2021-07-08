#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("******************************\n");
	printf("*** 1.开始游戏  0.结束游戏 ***\n");
	printf("******************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}

void game() 
{
	char ret = 0;
	char board[ROW][COL] = {0};
	BoardInit(board);
	DisplayBoard(board);
	while (1) 
	{
		PlayerMove(board);
		DisplayBoard(board);
		ret = IsWin(board,ROW,COL);  
		if (ret != 'C') 
		{
			break;
		}
		BotPlay(board);
		DisplayBoard(board);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*') 
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

void BoardInit(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i=0; i < 3; i++) 
	{
		for (j=0; j < 3; j++) 
		{
			board[i][j] = ' '; 
		}
	}
}

void DisplayBoard(char board[ROW][COL])
{
	printf(" %c | %c | %c \n",board[0][0], board[0][1], board[0][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

void PlayerMove(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("玩家落子\n");
	while (1)
	{
		printf("请输入落子坐标x和y（范围1-3）例如:1回车1回车  输入坐标1 1 \n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) 
		{
			if(board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				printf("落子成功\n");
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
			
		}
		else
		{
			printf("落子错误\n");
		}
	}
	
}

void BotPlay(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("电脑落子\n"); 
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)//竖三
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];	
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ') 
	{
		return board[1][1];
	}
	if (Is_Full(board) == 1) 
	{
		return 'Q';
	}
	return 'C';
}

int Is_Full(char board[ROW][COL]) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			if (board[i][j] == ' ') 
			{
				return 0;
			}
		}
	}
	return 1;
}