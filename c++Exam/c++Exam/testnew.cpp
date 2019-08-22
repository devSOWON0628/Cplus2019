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
		cout << "����� ���̴�" << age << "���Դϴ�"<<endl;
		cout << "����� �̸���" << name << "�Դϴ�" << endl;
	}

	~Student() {
		delete[]name;
		cout << "����" << endl;
	}

};

int main() {
	Student student1(18, "�ڼҿ�");
}