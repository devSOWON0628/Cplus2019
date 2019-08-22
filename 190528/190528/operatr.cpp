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
		cout << "이름" << name << endl;
		cout << "나이" << age << endl;
	}
	Student &operator=(Student &ref) {
		delete[] name;//메모리를 그냥 한번 정리
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "~Student소멸자 호출" << endl;
	}
};
int main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);
	st1 = st2;
	st1.ShowInfo();
	st2.ShowInfo();
	return 0;
}