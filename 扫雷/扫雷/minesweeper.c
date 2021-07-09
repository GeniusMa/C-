#define _CRT_SECURE_NO_WARNINGS 1
#include "minesweeper.h"

void menu() 
{
	printf("***************************************\n");
	printf("****   1.��ʼ��Ϸ    0.������Ϸ    ****\n");
	printf("***************************************\n");
}


void Start_Minesweeper() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("ѡ�����,������ѡ��\n");
		}
	} while (input);
}

void game() 
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	printf("ɨ��\n");
	Board_Init(mine, ROWS, COLS, '0');
	Board_Init(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	Plant_Mine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	Find_Mine(mine,show,ROW,COL);
}

void Board_Init(char board[ROWS][COLS], int rows, int cols,char set) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) 
	{
		for (j = 0; j < cols; j++) 
		{
			board[i][j] = set; 
		}
	}
}

void DisplayBoard(char show[ROWS][COLS], int row, int col) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++) 
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++) 
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}

void Plant_Mine(char mine[ROWS][COLS], int row, int col) 
{
	int mines = EASY_Mines;
	while (mines) 
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0') 
		{
			mine[x][y] = '1';
			mines--;
		}
	}
}

static get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	return mine[y - 1][x] + mine[y - 1][x - 1] + mine[y][x - 1] + mine[y + 1][x - 1] + mine[y + 1][x] + mine[y + 1][x + 1] + mine[y][x + 1] + mine[y - 1][x + 1] - 8 * '0';
}

void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_Mines)
	{
		printf("�������Ų��׵�����\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[y][x] == '1') 
			{
				printf("�㱻ը����\n");
				printf("���ź�����Ϸ����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else 
			{
				int count = get_mine_count(mine, y, x);
				show[y][x] = count+'0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("����Ƿ�������������\n");
	}
	if (win == row * col - EASY_Mines) 
	{
		printf("��ϲ�����׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}