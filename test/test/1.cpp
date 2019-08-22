#include <iostream>
using namespace std;
class Student {
private:
	int nHakbun;
	const char *sName;

public:
	Student() {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다" << endl;
	}

	void show() {
		cout << "학번은" << nHakbun << "입니다." << endl;
		cout << "이름은" << sName << "입니다." << endl;

	}

};

int main() {
	Student student1;
	student1.show();
	return 0;
}

/*
이름:이사랑
학번: 1234
이름:박소원
학번: 5678
삭줴
삭줴

*/