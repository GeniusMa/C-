#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


#define ROW 3
#define COL 3


void game();
void menu();
void test();
void BoardInit(char board[ROW][COL]);
void DisplayBoard(char board[ROW][COL]);
void PlayerMove(char board[ROW][COL]);
void BotPlay(char board[ROW][COL]);
char IsWin(char board[ROW][COL],int row,int col);
int Is_Full(char board[ROW][COL]);
#endif  __MAIN_H__