#include "KaiFunction.h"

using namespace std;

// �ð��� ȿ��
void RemoveCursor(void) {// Ŀ�� ���� �Լ� : ���Ե��� ���̱� ���ؼ� Ŀ���� ����ϴ�.
	CONSOLE_CURSOR_INFO curinfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
	curinfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}
void CreateCursor(void) {// Ŀ�� ���� �Լ� : ���Ե��� ���̱� ���ؼ� Ŀ���� �׸��ϴ�.
	CONSOLE_CURSOR_INFO curinfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
	curinfo.bVisible = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}
void Side(void) {// �׵θ� �ۼ� �Լ� : �׵θ��� �׸��ϴ�.
	COORD Pos = { 1,1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "�ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ�";
	for (short i = 2; i < 22; i++)
	{
		Pos = { 0,i };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��                                                                            ��";

	}
	Pos = { 1,22 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "������������������������������������������������������������������������������";
}
void Arrow(short x, short y) {// Arrow �Լ� : ������ �����ϴ� �ִϸ��̼� �Լ��Դϴ�.
	for (int i = 0; i < 3; i++)
	{
		COORD Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 1,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(150);
		////////////////////////////////////////////////// ���� ���
		Pos = { x - 1,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << " ";
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 16,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(30);
		Pos = { x - 16,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";

		//////////////////////////////////////////////////////���ƿ���
	}
}
void Clear(void) {// Clear �Լ� : �׵θ� ���� ���ϴ�.
	COORD Pos = { 0,0 };
	for (short i = 2; i < 70; i++) {
		for (short j = 2; j < 21; j++) {
			Pos = { i, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			cout << " ";
		}
	}
}
void Clear_err(void) {// Clear_err �Լ� : errǥ�ø� ���� �׵θ� ���� ���ϴ�.
	system("cls");
}
void Clear3Sec(void) {// Clear 3 Sec �Լ� : ���� �� 3�ʰ� �׵θ� ���� ���ϴ�.
	COORD Pos = { 0,0 };
	for (short i = 2; i < 70; i++) {
		for (short j = 2; j < 21; j++) {
			Pos = { i, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			cout << " ";
		}
	}
	Sleep(3000);
}
void StartGame(void) {// StartGame �Լ� : ����, ����-����-��! �� ���ϴ�.
	COORD Pos = { 30,10 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(100);
	Pos = { 32,10 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(200);
	Pos = { 34,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ",";
	Sleep(2000);
	Pos = { 36,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(200);
	Pos = { 38,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��-";
	Sleep(100);
	Pos = { 42,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(100);
	Pos = { 44,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��-";
	Sleep(400);
	Pos = { 48,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��!";
	Sleep(1400);
}
void StartGame2(void) {
	COORD Pos = { 30,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "����, ����- ����- ��!";
}
void SelectKBB(void) {
	COORD Pos = { 29, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "����� ������ ��������";
	Sleep(900);
	Pos = { 29, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "                                 ";
}

// ������ ���
void SelectYesOrNo(char * ch1, char * ch2) {
	COORD Pos = { 24,19 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ch1;
	Pos = { 47,19 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ch2;

}
void KaiBaiBo(void) {
	Sleep(500);
	COORD Pos = { 36, 6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "1.�� ��";
	Pos = { 36, 8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "2.�� ��";
	Pos = { 36, 10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "3. �� ";
}

// ����� �Է�
void Do_Blinks(void(*func)(char *, char *), char * ch1, char * ch2, short x, short y) {
	COORD Pos = { x,y };
	for (int i = 0; i < 5; i++)
	{
		Pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "          ";
		Sleep(80);
		func(ch1, ch2);
		Sleep(90);
	}
}
int Set_Blinks(void(*func)(char*, char*), char * ch1, char * ch2, void(*func2)(void), short x1, short y1, short x2, short y2, short x3, short y3) {
	int exit = 0; int select; char ch;
	while (_kbhit()) {
		ch = getch();
	}
	while (exit == 0)
	{
		while (_kbhit() == 0) {

		}
		ch = getch();
		switch (ch)
		{
		case 49://49�� 1�̴�.
			Do_Blinks(func, ch1, ch2, x1, y1); exit = 1; select = 1;
			break;
		case 50://50�� 2��.
			if (x2 == 0) {
				//Clear_err(); Side(); func2(); func(ch1, ch2);
			}
			else {
				Do_Blinks(func, ch1, ch2, x2, y2); exit = 1; select = 2;
			}
			break;
		case 51://51�� 3�̴�.
			if (x3 == 0) {
				//Clear_err(); Side(); func2(); func(ch1, ch2);
			}
			else {
				Do_Blinks(func, ch1, ch2, x3, y3);
				exit = 1; select = 3;
			}
			break;
		default:
			//Clear_err(); Side(); func2(); func(ch1, ch2); 
			break;
		}
	}
	return select;
}
void Do_Blinks(void(*func)(void), short x, short y, int select) {
	char * ch;
	COORD Pos = { x,y };
	switch (select)
	{
	case 1:
		ch = (char*)"1.�� ��";
		break;
	case 2:
		ch = (char*)"2.�� ��";
		break;
	case 3:
		ch = (char*)"3. �� ";
		break;
	}
	for (int i = 0; i < 5; i++)
	{
		Pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "          ";
		Sleep(80);
		Pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << ch;
		Sleep(90);
	}
}
int Set_Blinks(void(*func)(void), void(*func2)(void), short x1, short y1, short x2, short y2, short x3, short y3) {
	int exit = 0; int select = 0; char ch;
	while (_kbhit()) {
		ch = getch();
	}
	while (exit == 0)
	{

		ch = getch();
		switch (ch)
		{
		case 49://49�� 1�̴�.
			select = 1;
			Do_Blinks(func, x1, y1, select); exit = 1;
			break;
		case 50://50�� 2��.
			if (x2 == 0) {
				//Clear_err(); Side(); func2(); func();
			}
			else {
				select = 2;
				Do_Blinks(func, x2, y2, select); exit = 1;
			}
			break;
		case 51://51�� 3�̴�.
			if (x3 == 0) {
				//Clear_err(); Side(); func2(); func();
			}
			else {
				select = 3;
				Do_Blinks(func, x3, y3, select); exit = 1;
			}
			break;
		default:
			//Clear_err(); Side(); func2(); func(); 
			break;
		}
	}
	return select;
}

// ���� ���
void ComSelect(void) {
	for (int i = 0; i < 3; i++) {
		COORD Pos = { 28,10 };
		Sleep(1500);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		CreateCursor(); cout << "��";
		Sleep(100);
		Pos = { 30,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "ǻ";
		Sleep(100);
		Pos = { 32,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 34,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "�� ";
		Sleep(100);
		Pos = { 37,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 39,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 41,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 43,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "�� ";
		Sleep(100);
		Pos = { 46,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 48,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 50,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��";
		Sleep(100);
		Pos = { 52,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "��!";
		Sleep(200);
		RemoveCursor();
		Clear();

	}
}
int WinLose(int result, int result2) {
	int Result;
	COORD Pos = { 23,10 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	switch (result2)
	{
	case 0:
		cout << "��ǻ�ʹ� ��γ��� [�� ��]��(��) �´�. " << endl; break;
	case 1:
		cout << "��ǻ�ʹ� ��γ��� [�� ��]��(��) �´�. " << endl; break;
	case 2:
		cout << "��ǻ�ʹ� ��γ��� [ �� ]��(��) �´�. " << endl; break;
	}
	Sleep(2000);
	Clear();
	int winLoseArr[3][3] = { { 1,3,2 },
	{ 2,1,3 },
	{ 3,2,1 } };
	Result = winLoseArr[result][result2];
	Pos = { 22,10 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	if (Result == 1) {
		cout << "	    [����] �̹� ������ ����. " << endl;
	}
	else if (Result == 2) {
		cout << "	[����] ����ڰ� ��ǻ�͸� �̰��! " << endl;
	}
	else if (Result == 3) {
		cout << "[����] ����ڴ� ��ǻ�Ϳ��� �й��ߴ�. . . " << endl;
	}
	Sleep(3000);
	return Result;
}
void ShowRecord(int a, int b, int c) {
	int patience = a + b + c;
	COORD Pos = { 34,6 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "��";
	Sleep(200);
	Pos = { 36,6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(200);
	Pos = { 38,6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ": ";
	Sleep(200);
	Pos = { 40,6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << a << "  ";
	Sleep(200);
	Pos = { 42,6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "ȸ";
	Sleep(400);
	Pos = { 34,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "��";
	Sleep(200);
	Pos = { 36,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(200);
	Pos = { 38,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ": ";
	Sleep(200);
	Pos = { 40,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << b << "  ";
	Sleep(200);
	Pos = { 42,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "ȸ";
	Sleep(400);
	Pos = { 32,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "��";
	Sleep(200);
	Pos = { 34,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "��";
	Sleep(200);
	Pos = { 36,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "��";
	Sleep(200);
	Pos = { 38,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ": ";
	Sleep(200);
	Pos = { 40,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << c << "  ";
	Sleep(200);
	Pos = { 42,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "ȸ";
	Sleep(3400);
	RemoveCursor();

	Pos = { 28,15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "���������� ���� �� ����";
	Sleep(400);
	Pos = { 19,18 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	if (patience >= 15) {
		if (a > b + c)
		{
			cout << "   �ϱ� ����� ������ �������� ����ϱ���!!";
			Clear();
		}
		else if (a <= b + c && a > b)
		{
			cout << "  �ڳ�, �� �پ ���������� �Ƿ��� ��������!";
		}
		else {
			cout << "����� ���������� ���̾�... �Ǹ����� ����!";
		}
	}
	else if (patience >= 10) {
		if (a > b + c)
		{
			cout << "   ������ ������������ �ڳ׸� �̱��� ����ɼ�!!";
			Clear();
		}
		else if (a <= b + c && a > b)
		{
			cout << "  �ڳ�, �� �پ ���������� �Ƿ��� ��������!";
		}
		else {
			cout << "����� ���������� ���̾�... �Ǹ����� ����!";
		}
	}//10���̻� �ڸ�Ʈ
	else if (patience >= 5) {
		if (a > b) {
			cout << "	���� ������ �ʱ���, ������ �غ���!";
		}
		else {
			cout << "	�� �� ����ؼ� �����غ���...";
		}
	}//5���̻� �ڸ�Ʈ
	else if (patience < 5) {
		if (a == 0) {
			cout << "�� ���� �̱��� ���ߴٴ�... ������ �����ϱ���.";
		}
		else {
			cout << "5�ǵ� ���غ��� �Ƿ��� ���ش޶��... (������)";
		}
	}
}
void InitRecord(int * ptr1, int * ptr2, int * ptr3) {
	*ptr1 = 0;
	*ptr2 = 0;
	*ptr3 = 0;
}