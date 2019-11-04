/*
		금오공과대학교 20131231 정현우
		프로그램 이름 : KaiBaiBo (도전, 가위-바위-보!)
		제작시기 : 2016년 9월
		과제번호 : 3번, 가위바위보 문제
		프로그램 설명 : 다양한 라이브러리를 이용하여 보다 기존의 가위바위보보다 직관적인 콘솔버젼의 가위바위보 게임 제작
		활용하는 키 : 1,2,3번 키
		호환 플랫폼 및 개발언어 : windows 환경의 visual studio C++를 이용하여 제작
		오류 : 데스크탑이 아닌, 노트북으로 실행 시, 간혹 콘솔 그래픽이 깨지는 오류가 있지만 원인을 찾지 못함
*/
#include "KaiFunction.h"

using namespace std;

int main(void)
{
	srand(time(NULL));

	int select = 0; char * ch1; char * ch2;//[변수선언]
	int player, com, loopNum0, loopNum1, loopNum2; //[변수선언]
	int Result, playerWin = 0, playerLose = 0, playerDraw = 0;//[변수선언]
	ch1 = (char*)"1.시작하기"; ch2 = (char*)"2.종료하기";//[변수초기화] ch 초기화

	Side();//[애니메이션] 테두리 생성
	StartGame();//[애니메이션] 도전, 가위- 바위- 보! 출력
	RemoveCursor();//[애니메이션] 마우스 커서 안보이게 함
	SelectYesOrNo(ch1, ch2);//[선택지] ch 출력
	Arrow(22, 19);//[애니메이션] 화살표 움직이는 효과 출력

	select = Set_Blinks(SelectYesOrNo, ch1, ch2, StartGame2, 24, 19, 47, 19); //[선택지] 선택 및 [애니메이션] 깜빡이기
	switch (select)//[스위치] 시작과 종료 스위치
	{
	case 1:
		loopNum0 = 0; loopNum1 = 0; loopNum2 = 0; break; //시작
	case 2:
		loopNum0 = 1; loopNum2 = 1; loopNum1 = 1; break; //종료
	}
	while (loopNum2 == 0)//while2문 시작
	{

		loopNum1 = 0;//[변수초기화] while을 돌아올 때, 대신 초기화
		loopNum2 = 1;// loopNum2 초기화
		while (loopNum1 == 0)//while1문 시작
		{
			loopNum0 = 0;//[변수초기화] while을 돌아올 때, 대신 초기화
			loopNum1 = 1;// loopNum1 초기화
			while (loopNum0 == 0)//while0문 시작
			{

				loopNum0 = 1;// loopNum0 초기화
				Clear();//[애니메이션] 화면 지우기
				KaiBaiBo();//[애니메이션] 가위바위보 출력
				SelectKBB();//[애니메이션] 응원 출력
				select = Set_Blinks(KaiBaiBo, KaiBaiBo, 36, 6, 36, 8, 36, 10);//[선택지] 선택 및 [애니메이션] 깜빡이기
				switch (select)
				{
				case 1:
					Arrow(34, 6); break;
				case 2:
					Arrow(34, 8); break;
				case 3:
					Arrow(34, 10); break;
				}
				player = select - 1;
				Sleep(100);
				COORD Pos = { 34, 15 };
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
				cout << "확실합니까?";
				ch1 = (char*)"1.확실해요"; ch2 = (char*)"2.바꿀래요";
				SelectYesOrNo(ch1, ch2);
				select = Set_Blinks(SelectYesOrNo, ch1, ch2, KaiBaiBo, 24, 19, 47, 19);
				switch (select)
				{
				case 1:
					Clear();
					break;
				case 2:
					loopNum0 = 0;
					break;
				}//switch 끝
			}//while0 끝
			com = rand() % 3; ComSelect();//[변수값] rand값 지정 & [애니메이션] 컴퓨터 선택 중 출력
			Result = WinLose(player, com);//[변수값] 승패에 따라 반환값 대입 & [애니메이션] 승패 출력
			switch (Result)
			{
			case 1:
				playerDraw++; break;
			case 2:
				playerWin++; break;
			case 3:
				playerLose++; break;
			}//switch 끝
			COORD Pos = { 34, 15 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			cout << "다시해볼까?";
			ch1 = (char*)"1.안할래요"; ch2 = (char*)"2.해볼래요";
			SelectYesOrNo(ch1, ch2);
			select = Set_Blinks(SelectYesOrNo, ch1, ch2, Side, 24, 19, 47, 19);
			switch (select)
			{
			case 1:
				Clear();
				break;
			case 2:
				Clear();
				loopNum1 = 0;
			}//switch 끝
		}//while1 끝
		ShowRecord(playerWin, playerLose, playerDraw);//[애니메이션] 최종전적과 최종코멘트 출력
		InitRecord(&playerWin, &playerLose, &playerDraw);//[함수] 전적 초기화
		Sleep(5000);
		Clear();
		COORD Pos = { 34, 15 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "다시해볼까?";
		ch1 = (char*)"1.종료하기"; ch2 = (char*)"2.다시할래!";
		SelectYesOrNo(ch1, ch2);
		select = Set_Blinks(SelectYesOrNo, ch1, ch2, Side, 24, 19, 47, 19);
		switch (select)
		{
		case 1:
			Clear();
			break;
		case 2:
			loopNum2 = 0;
		}
	}//while2 끝
	Clear3Sec();
	system("cls");
	return 0;


}
