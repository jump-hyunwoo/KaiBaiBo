/*
		�ݿ��������б� 20131231 ������
		���α׷� �̸� : KaiBaiBo (����, ����-����-��!)
		���۽ñ� : 2016�� 9��
		������ȣ : 3��, ���������� ����
		���α׷� ���� : �پ��� ���̺귯���� �̿��Ͽ� ���� ������ �������������� �������� �ֹܼ����� ���������� ���� ����
		Ȱ���ϴ� Ű : 1,2,3�� Ű
		ȣȯ �÷��� �� ���߾�� : windows ȯ���� visual studio C++�� �̿��Ͽ� ����
		���� : ����ũž�� �ƴ�, ��Ʈ������ ���� ��, ��Ȥ �ܼ� �׷����� ������ ������ ������ ������ ã�� ����
*/
#include "KaiFunction.h"

using namespace std;

int main(void)
{
	srand(time(NULL));

	int select = 0; char * ch1; char * ch2;//[��������]
	int player, com, loopNum0, loopNum1, loopNum2; //[��������]
	int Result, playerWin = 0, playerLose = 0, playerDraw = 0;//[��������]
	ch1 = (char*)"1.�����ϱ�"; ch2 = (char*)"2.�����ϱ�";//[�����ʱ�ȭ] ch �ʱ�ȭ

	Side();//[�ִϸ��̼�] �׵θ� ����
	StartGame();//[�ִϸ��̼�] ����, ����- ����- ��! ���
	RemoveCursor();//[�ִϸ��̼�] ���콺 Ŀ�� �Ⱥ��̰� ��
	SelectYesOrNo(ch1, ch2);//[������] ch ���
	Arrow(22, 19);//[�ִϸ��̼�] ȭ��ǥ �����̴� ȿ�� ���

	select = Set_Blinks(SelectYesOrNo, ch1, ch2, StartGame2, 24, 19, 47, 19); //[������] ���� �� [�ִϸ��̼�] �����̱�
	switch (select)//[����ġ] ���۰� ���� ����ġ
	{
	case 1:
		loopNum0 = 0; loopNum1 = 0; loopNum2 = 0; break; //����
	case 2:
		loopNum0 = 1; loopNum2 = 1; loopNum1 = 1; break; //����
	}
	while (loopNum2 == 0)//while2�� ����
	{

		loopNum1 = 0;//[�����ʱ�ȭ] while�� ���ƿ� ��, ��� �ʱ�ȭ
		loopNum2 = 1;// loopNum2 �ʱ�ȭ
		while (loopNum1 == 0)//while1�� ����
		{
			loopNum0 = 0;//[�����ʱ�ȭ] while�� ���ƿ� ��, ��� �ʱ�ȭ
			loopNum1 = 1;// loopNum1 �ʱ�ȭ
			while (loopNum0 == 0)//while0�� ����
			{

				loopNum0 = 1;// loopNum0 �ʱ�ȭ
				Clear();//[�ִϸ��̼�] ȭ�� �����
				KaiBaiBo();//[�ִϸ��̼�] ���������� ���
				SelectKBB();//[�ִϸ��̼�] ���� ���
				select = Set_Blinks(KaiBaiBo, KaiBaiBo, 36, 6, 36, 8, 36, 10);//[������] ���� �� [�ִϸ��̼�] �����̱�
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
				cout << "Ȯ���մϱ�?";
				ch1 = (char*)"1.Ȯ���ؿ�"; ch2 = (char*)"2.�ٲܷ���";
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
				}//switch ��
			}//while0 ��
			com = rand() % 3; ComSelect();//[������] rand�� ���� & [�ִϸ��̼�] ��ǻ�� ���� �� ���
			Result = WinLose(player, com);//[������] ���п� ���� ��ȯ�� ���� & [�ִϸ��̼�] ���� ���
			switch (Result)
			{
			case 1:
				playerDraw++; break;
			case 2:
				playerWin++; break;
			case 3:
				playerLose++; break;
			}//switch ��
			COORD Pos = { 34, 15 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
			cout << "�ٽ��غ���?";
			ch1 = (char*)"1.���ҷ���"; ch2 = (char*)"2.�غ�����";
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
			}//switch ��
		}//while1 ��
		ShowRecord(playerWin, playerLose, playerDraw);//[�ִϸ��̼�] ���������� �����ڸ�Ʈ ���
		InitRecord(&playerWin, &playerLose, &playerDraw);//[�Լ�] ���� �ʱ�ȭ
		Sleep(5000);
		Clear();
		COORD Pos = { 34, 15 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
		cout << "�ٽ��غ���?";
		ch1 = (char*)"1.�����ϱ�"; ch2 = (char*)"2.�ٽ��ҷ�!";
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
	}//while2 ��
	Clear3Sec();
	system("cls");
	return 0;


}
