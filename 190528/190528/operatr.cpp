#include <iostream>
using	 namespace std;

class Student {
private:
	char *name;
	int age;

public:
	Student(const char * name, int age) :age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "�̸�" << name << endl;
		cout << "����" << age << endl;
	}
	Student &operator=(Student &ref) {
		delete[] name;//�޸𸮸� �׳� �ѹ� ����
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "~Student�Ҹ��� ȣ��" << endl;
	}
};
int main() {
	Student st1("�̸���", 27);
	Student st2("���̽�����", 10);
	st1 = st2;
	st1.ShowInfo();
	st2.ShowInfo();
	return 0;
}