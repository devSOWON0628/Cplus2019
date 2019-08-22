#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y);
void start_screen();
void gamestart();
void Game_description();


int main() {
	int select;//시작화면에서 선택
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
	printf("1)게임 시작");
	gotoxy(50, 81);
	printf("2)게임 설명");
	gotoxy(50, 82);
	printf("3)끝내기");
	gotoxy(60, 87);
	printf(">>>");

}
void gamestart() {
	system("cls\n");
	gotoxy(20, 3);
	printf("스테이지 선택!");
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
	printf("[게임 설명☆]");
	gotoxy(10, 10);
	printf("각각 적혀있는 숫자를 보면서 숨겨져 있는 그림을 그리는 게임입니다.");
	gotoxy(10, 12);
	printf("화살표로 커서를 이동시킨 뒤 스페이스바를 누르면 색칠됩니다!");
	gotoxy(10, 13);
	printf("키보드의 Shift를 누르면 x가 그려집니다!");
	
}
