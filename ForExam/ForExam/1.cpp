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
	name = "박소원";
}

Student::Student(int age, const char * name) {
	this->age = age;
	this->name = name;
}

void Student::show() {
	cout << "나이: " << age << endl;
	cout << "이름: " << name << endl;
}
int main() {
	Student st[3] = {
		Student(),
		Student(17,"17살의 박소원"),
		Student(18,"18살의 박소원")
	};

	for (int i = 0; i < 3; i++) {
		st[i].show();
	}
	return 0;
}