#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);
void start_screen();
void gamestart();
void Game_description();


int main() {
	int select;//����ȭ�鿡�� ����
	start_screen();
	gotoxy(63, 87);
	scanf("%d", &select);

	switch (select)
	{
		case 1: gamestart(); break;
		case 2: Game_description(); break;
		case 3: return 0; break;
	}
	
	

}

void gotoxy(int x, int y) {
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void start_screen() {
	system("cls\n");
	gotoxy(50, 80);
	printf("1)���� ����");
	gotoxy(50, 81);
	printf("2)���� ����");
	gotoxy(50, 82);
	printf("3)������");
	gotoxy(60, 87);
	printf(">>>");

}
void gamestart() {
	system("cls\n");
	gotoxy(20, 3);
	printf("�������� ����!");
	gotoxy(20, 10);
	for (int i=1; i <= 10; i++) {
		if (i == 6) gotoxy(20, 12);
		printf("%5d", i);
	}
	//gotoxy(20, 11);
	
}
void Game_description() {
	system("cls");
	gotoxy(10, 5);
	printf("[���� �����]");
	gotoxy(10, 10);
	printf("���� �����ִ� ���ڸ� ���鼭 ������ �ִ� �׸��� �׸��� �����Դϴ�.");
	gotoxy(10, 12);
	printf("ȭ��ǥ�� Ŀ���� �̵���Ų �� �����̽��ٸ� ������ ��ĥ�˴ϴ�!");
	gotoxy(10, 13);
	printf("Ű������ Shift�� ������ x�� �׷����ϴ�!");
	
}
