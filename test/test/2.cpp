#include <iostream>
using namespace std;
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student() {
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�⺻�����ڿ��� �й��� ��ϵǾ����ϴ�." << endl;
	}
	Student(int nHakbun, const char *sName) {
		this->nHakbun = nHakbun;
		this->sName = sName;
		cout << "�����ڿ����ε����� �й��� ��ϵǾ����ϴ�." << endl;
	}

	void show() {
		cout << "�̸�:" << sName << endl;
		cout << "�й�: " << nHakbun << endl;
	}

	~Student() {
		cout << "����" << endl;
	}
};
int main() {
	Student s1;
	Student s2(5678, "�ڼҿ�");
	s1.show();
	s2.show();
	return 0;
}