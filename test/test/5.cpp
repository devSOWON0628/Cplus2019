#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char *name;

public:
	Cat() {
		age = 18;
		name = "�߿���";
	}
	Cat(int age, const char* name) {
		this->age = age;
		this->name = name;
	}

	~Cat() {}
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char* getName() { return (char*)name; }
	void setName(const char* Name) { this->name = name; }
};
int main() {
	Cat*cat = new Cat;
	cout << "������� ����" << cat->getAge() << endl;
	cout << "������� �̸�" << cat->getName() << endl;

	cat->setAge(20);
	cat->setName("�����");
	
	cout << "������� ����" << cat->getAge()<< endl;
	cout << "������� �̸�" << cat->getName() << endl;
	return 0;

}