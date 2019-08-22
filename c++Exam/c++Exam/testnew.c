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
		printf("당신의 이름은 %s\n", tname);
		printf("당신의 나이는 %d", tage);
	}

int main() {
	Student(18, "박소원");
	show();
}