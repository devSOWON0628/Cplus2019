#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	int tage;
	char * tname=NULL;

	void Student(int age, const char *name) {
		tage = age;
		int len = strlen(name) + 1;
		//tname = (char*)malloc(sizeof(char) * 4);
		tname = name;
		strcpy_s(tname, len, name);
	}

	void show() {
		printf("����� �̸��� %s\n", tname);
		printf("����� ���̴� %d", tage);
	}

int main() {
	Student(18, "�ڼҿ�");
	show();
}