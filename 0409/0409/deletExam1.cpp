#include <iostream>
using namespace std;
class Student {
private:
	char*name;
	int age;

public:
	Student(const char*myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowStudentInfo(){
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Student() {
		delete[]name;
		cout << "called destuctor!" << endl;
	}
};
int main() {
	Student student1("lee mee rim", 33);
	Student student2("Hong gil dong", 34);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;
}