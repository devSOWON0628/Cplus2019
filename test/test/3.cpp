#include <iostream>
using namespace std;
class Student {
private:
	int nHakbun;
	const char * sName;

public:
	Student() {
		nHakbun = 1234;
		sName = "����";
	}
	Student(int nHakbun, const char *sName) {
		this->nHakbun = nHakbun;
		this->sName = sName;
	}

	void show() {
		cout << "�̸�:" << sName << endl;
		cout << "�й�: " << nHakbun << endl;
	}
};

int main() {
	Student s[3] = {
		Student(),
		Student(5678,"����"),
		Student(91011,"�پ�")
	};

	for (int i = 0; i < 3; i++) {
		s[i].show();
	}

}