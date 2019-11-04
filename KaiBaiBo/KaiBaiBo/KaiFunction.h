#ifndef _KAI_BAI_BO_
#define _KAI_BAI_BO_
#endif
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <cstdlib>

void RemoveCursor(void);
void CreateCursor(void);
void Side(void);
void Clear(void);
void Clear_err(void);
void Clear3Sec(void);
void StartGame(void);
void StartGame2(void);
void Arrow(short x, short y);
void SelectYesOrNo(char * ch1, char * ch2);
void KaiBaiBo(void);
void Do_Blinks(void(*func)(char *, char *), char * ch1, char * ch2, short x, short y);
int Set_Blinks(void(*func)(char*, char*), char * ch1, char * ch2, void(*func2)(void), short x1, short y1, short x2 = 0, short y2 = 0, short x3 = 0, short y3 = 0);
void Do_Blinks(void(*func)(void), short x, short y, int select);
int Set_Blinks(void(*func)(void), void(*func2)(void), short x1, short y1, short x2 = 0, short y2 = 0, short x3 = 0, short y3 = 0);
void SelectKBB(void);
void ComSelect(void);
int WinLose(int result, int result2);
void ShowRecord(int a, int b, int c);
void InitRecord(int * ptr1, int * ptr2, int * ptr3);