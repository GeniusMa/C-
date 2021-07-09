#ifndef __MINESWEEPER_H__
#define __MINESWEEPER_H__
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2 
#define COLS COL+2
#define EASY_Mines 10


void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
void Plant_Mine(char mine[ROWS][COLS],int row,int col);
void menu();
void Start_Minesweeper();
void game();
void Board_Init(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char show[ROWS][COLS],int row,int col);
#endif  __MINESWEEPER_H__