#include <iostream>
using namespace std;
class Person {
public:
	void PrintMethod() {
		cout << "Person's Method" << endl;
	}
};

class Student : public Person
{
public:
	void PrintMethod() {
		Person::PrintMethod();//부모클래스의 메서드를 부를 때
		// Person클래스의 PrintMethod를 불러온다.
		cout << "Child Method" << endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();
	return 0;
}