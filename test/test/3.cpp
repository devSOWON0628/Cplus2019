#include <iostream>
using namespace std;
class Student {
private:
	int nHakbun;
	const char * sName;

public:
	Student() {
		nHakbun = 1234;
		sName = "°¡¾¾";
	}
	Student(int nHakbun, const char *sName) {
		this->nHakbun = nHakbun;
		this->sName = sName;
	}

	void show() {
		cout << "ÀÌ¸§:" << sName << endl;
		cout << "ÇÐ¹ø: " << nHakbun << endl;
	}
};

int main() {
	Student s[3] = {
		Student(),
		Student(5678,"³ª¾¾"),
		Student(91011,"´Ù¾¾")
	};

	for (int i = 0; i < 3; i++) {
		s[i].show();
	}

}