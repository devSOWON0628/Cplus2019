#include <string>
#include <iostream>
using namespace std;
class Person {
private:
	string name;
	int age;

public:
	Person(const  string& name, int age) {
		this->name = name;
		this->age = age;
	}

	void ShoPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}
};
class Student : public Person {
private:
	int id;
public:
	Student(int id, const string &name, int age) :Person(name, age)
		//Student생성자를 실행하기 전 상위또는 기초클래스인 Person(name,age)
		//를 먼저 호출하여 실행한 후에 하위 클래스인 Student생성자를 실행
	{
		this->id = id;
		
	}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShoPerson();
}
