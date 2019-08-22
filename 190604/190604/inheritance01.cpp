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
		cout << name << "�� ���̴� " << age << "�Դϴ�" << endl;
	}
};
class Student : public Person {
private:
	int id;
public:
	Student(int id, const string &name, int age) :Person(name, age)
		//Student�����ڸ� �����ϱ� �� �����Ǵ� ����Ŭ������ Person(name,age)
		//�� ���� ȣ���Ͽ� ������ �Ŀ� ���� Ŭ������ Student�����ڸ� ����
	{
		this->id = id;
		
	}
};
int main() {
	Student student(1234, "ȫ�浿", 33);
	student.ShoPerson();
}
