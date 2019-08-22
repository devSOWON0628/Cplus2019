#include <iostream>
using namespace std;
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student() {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "기본생성자에서 학번이 등록되었습니다." << endl;
	}
	Student(int nHakbun, const char *sName) {
		this->nHakbun = nHakbun;
		this->sName = sName;
		cout << "생성자오버로딩으로 학번이 등록되었습니다." << endl;
	}

	void show() {
		cout << "이름:" << sName << endl;
		cout << "학번: " << nHakbun << endl;
	}

	~Student() {
		cout << "삭줴" << endl;
	}
};
int main() {
	Student s1;
	Student s2(5678, "박소원");
	s1.show();
	s2.show();
	return 0;
}