#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("******************************\n");
	printf("*** 1.��ʼ��Ϸ  0.������Ϸ ***\n");
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
			printf("������\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
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
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
	printf("�������\n");
	while (1)
	{
		printf("��������������x��y����Χ1-3������:1�س�1�س�  ��������1 1 \n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) 
		{
			if(board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				printf("���ӳɹ�\n");
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
			
		}
		else
		{
			printf("���Ӵ���\n");
		}
	}
	
}

void BotPlay(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	printf("��������\n"); 
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
	for (i = 0; i < col; i++)//����
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