#include <iostream>
using namespace std;

class Student {
private:
	int age;
	char *name;

public:
	Student(const char * pname, int page) {
		int len = strlen(pname) + 1;
		name = new char[len];
		strcpy_s(name, len, pname);
		age = page;
	}
	void show() {
		cout << name << age << endl;
	}

	~Student() {
		delete[]name;
		cout << "지워짐" << endl;
	}
};

int main() {
	Student s1 = {"박소원",17};
	s1.show();

	return 0;

}