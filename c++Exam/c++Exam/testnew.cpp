#include <iostream>
using namespace std;

class Student {
private: 
	int age;
	char * name=nullptr;

public :
	Student(int age, const char *name) {
		this->age = age;
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy_s(this->name, len, name);
	}

	void show() {
		cout << "당신의 나이는" << age << "살입니다"<<endl;
		cout << "당신의 이름은" << name << "입니다" << endl;
	}

	~Student() {
		delete[]name;
		cout << "지움" << endl;
	}

};

int main() {
	Student student1(18, "박소원");
}