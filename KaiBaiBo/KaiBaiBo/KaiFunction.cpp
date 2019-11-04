#include "KaiFunction.h"

using namespace std;

// 시각적 효과
void RemoveCursor(void) {// 커서 삭제 함수 : 몰입도를 높이기 위해서 커서를 지웁니다.
	CONSOLE_CURSOR_INFO curinfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
	curinfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}
void CreateCursor(void) {// 커서 생성 함수 : 몰입도를 높이기 위해서 커서를 그립니다.
	CONSOLE_CURSOR_INFO curinfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
	curinfo.bVisible = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}
void Side(void) {// 테두리 작성 함수 : 테두리를 그립니다.
	COORD Pos = { 1,1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿";
	for (short i = 2; i < 22; i++)
	{
		Pos = { 0,i };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "｜                                                                            ｜";

	}
	Pos = { 1,22 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣";
}
void Arrow(short x, short y) {// Arrow 함수 : 선택을 유도하는 애니메이션 함수입니다.
	for (int i = 0; i < 3; i++)
	{
		COORD Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 1,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(150);
		////////////////////////////////////////////////// 가서 찍기
		Pos = { x - 1,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << " ";
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 2,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 3,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 4,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 5,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 6,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 10,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 15,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";
		Pos = { x - 16,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "→";
		Sleep(30);
		Pos = { x - 16,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "  ";

		//////////////////////////////////////////////////////돌아오기
	}
}
void Clear(void) {// Clear 함수 : 테두리 안을 비웁니다.
	COORD Pos = { 0,0 };
	for (short i = 2; i < 70; i++) {
		for (short j = 2; j < 21; j++) {
			Pos = { i, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			cout << " ";
		}
	}
}
void Clear_err(void) {// Clear_err 함수 : err표시를 위해 테두리 안을 비웁니다.
	system("cls");
}
void Clear3Sec(void) {// Clear 3 Sec 함수 : 종료 전 3초간 테두리 안을 비웁니다.
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
void StartGame(void) {// StartGame 함수 : 도전, 가위-바위-보! 를 띄웁니다.
	COORD Pos = { 30,10 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "도";
	Sleep(100);
	Pos = { 32,10 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "전";
	Sleep(200);
	Pos = { 34,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << ",";
	Sleep(2000);
	Pos = { 36,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "가";
	Sleep(200);
	Pos = { 38,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "위-";
	Sleep(100);
	Pos = { 42,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "바";
	Sleep(100);
	Pos = { 44,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "위-";
	Sleep(400);
	Pos = { 48,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "보!";
	Sleep(1400);
}
void StartGame2(void) {
	COORD Pos = { 30,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "도전, 가위- 바위- 보!";
}
void SelectKBB(void) {
	COORD Pos = { 29, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "당신의 직감을 믿으세요";
	Sleep(900);
	Pos = { 29, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "                                 ";
}

// 선택지 출력
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
	cout << "1.가 위";
	Pos = { 36, 8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "2.바 위";
	Pos = { 36, 10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "3. 보 ";
}

// 사용자 입력
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
		case 49://49가 1이다.
			Do_Blinks(func, ch1, ch2, x1, y1); exit = 1; select = 1;
			break;
		case 50://50이 2다.
			if (x2 == 0) {
				//Clear_err(); Side(); func2(); func(ch1, ch2);
			}
			else {
				Do_Blinks(func, ch1, ch2, x2, y2); exit = 1; select = 2;
			}
			break;
		case 51://51이 3이다.
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
		ch = (char*)"1.가 위";
		break;
	case 2:
		ch = (char*)"2.바 위";
		break;
	case 3:
		ch = (char*)"3. 보 ";
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
		case 49://49가 1이다.
			select = 1;
			Do_Blinks(func, x1, y1, select); exit = 1;
			break;
		case 50://50이 2다.
			if (x2 == 0) {
				//Clear_err(); Side(); func2(); func();
			}
			else {
				select = 2;
				Do_Blinks(func, x2, y2, select); exit = 1;
			}
			break;
		case 51://51이 3이다.
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

// 게임 기능
void ComSelect(void) {
	for (int i = 0; i < 3; i++) {
		COORD Pos = { 28,10 };
		Sleep(1500);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		CreateCursor(); cout << "컴";
		Sleep(100);
		Pos = { 30,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "퓨";
		Sleep(100);
		Pos = { 32,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "터";
		Sleep(100);
		Pos = { 34,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "가 ";
		Sleep(100);
		Pos = { 37,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "선";
		Sleep(100);
		Pos = { 39,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "택";
		Sleep(100);
		Pos = { 41,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "하";
		Sleep(100);
		Pos = { 43,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "고 ";
		Sleep(100);
		Pos = { 46,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "있";
		Sleep(100);
		Pos = { 48,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "습";
		Sleep(100);
		Pos = { 50,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "니";
		Sleep(100);
		Pos = { 52,10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "다!";
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
		cout << "컴퓨터는 고민끝에 [가 위]을(를) 냈다. " << endl; break;
	case 1:
		cout << "컴퓨터는 고민끝에 [바 위]을(를) 냈다. " << endl; break;
	case 2:
		cout << "컴퓨터는 고민끝에 [ 보 ]을(를) 냈다. " << endl; break;
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
		cout << "	    [정보] 이번 게임은 비겼다. " << endl;
	}
	else if (Result == 2) {
		cout << "	[정보] 사용자가 컴퓨터를 이겼다! " << endl;
	}
	else if (Result == 3) {
		cout << "[정보] 사용자는 컴퓨터에게 패배했다. . . " << endl;
	}
	Sleep(3000);
	return Result;
}
void ShowRecord(int a, int b, int c) {
	int patience = a + b + c;
	COORD Pos = { 34,6 };
	Sleep(1500);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "승";
	Sleep(200);
	Pos = { 36,6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "리";
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
	cout << "회";
	Sleep(400);
	Pos = { 34,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "패";
	Sleep(200);
	Pos = { 36,8 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "배";
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
	cout << "회";
	Sleep(400);
	Pos = { 32,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "무";
	Sleep(200);
	Pos = { 34,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	CreateCursor(); cout << "승";
	Sleep(200);
	Pos = { 36,10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "부";
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
	cout << "회";
	Sleep(3400);
	RemoveCursor();

	Pos = { 28,15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	cout << "가위바위보 신의 한 마디";
	Sleep(400);
	Pos = { 19,18 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	if (patience >= 15) {
		if (a > b + c)
		{
			cout << "   믿기 어려울 정도로 정말이지 대단하구만!!";
			Clear();
		}
		else if (a <= b + c && a > b)
		{
			cout << "  자네, 꽤 뛰어난 가위바위보 실력을 가졌구만!";
		}
		else {
			cout << "노력은 가상하지만 말이야... 실망하지 말라구!";
		}
	}
	else if (patience >= 10) {
		if (a > b + c)
		{
			cout << "   누구도 가위바위보로 자네를 이기기는 힘들걸세!!";
			Clear();
		}
		else if (a <= b + c && a > b)
		{
			cout << "  자네, 꽤 뛰어난 가위바위보 실력을 가졌구만!";
		}
		else {
			cout << "노력은 가상하지만 말이야... 실망하지 말라구!";
		}
	}//10전이상 코멘트
	else if (patience >= 5) {
		if (a > b) {
			cout << "	감이 나쁘지 않구만, 열심히 해보게!";
		}
		else {
			cout << "	좀 더 노력해서 연마해보게...";
		}
	}//5전이상 코멘트
	else if (patience < 5) {
		if (a == 0) {
			cout << "한 번도 이기질 못했다니... 수련이 부족하구만.";
		}
		else {
			cout << "5판도 안해보고 실력을 평가해달라니... (못마땅)";
		}
	}
}
void InitRecord(int * ptr1, int * ptr2, int * ptr3) {
	*ptr1 = 0;
	*ptr2 = 0;
	*ptr3 = 0;
}