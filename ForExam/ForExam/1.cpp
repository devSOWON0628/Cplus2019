#include <iostream>
using namespace std;
class Student {
private:
	int age;
	const char * name;

public:
	Student();
	Student(int , const char*);
	void show();
};

Student::Student() {
	age = 18;
	name = "�ڼҿ�";
}

Student::Student(int age, const char * name) {
	this->age = age;
	this->name = name;
}

void Student::show() {
	cout << "����: " << age << endl;
	cout << "�̸�: " << name << endl;
}
int main() {
	Student st[3] = {
		Student(),
		Student(17,"17���� �ڼҿ�"),
		Student(18,"18���� �ڼҿ�")
	};

	for (int i = 0; i < 3; i++) {
		st[i].show();
	}
	return 0;
}