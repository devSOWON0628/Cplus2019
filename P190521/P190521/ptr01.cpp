#include <iostream>
using namespace std;
class cat {
private: 
	int age;
	const char * name;
public :
	cat() {
		age = 18;
		name = "�߿���";
	}
	~cat() {}
		int getAge() { return age; }
		void setAge(int age) { this->age = age; }
		char * getName() { return (char*)name; }
		void setName(const char *name) { this->name = name; }
};

int main() {
	cat* pcat = new cat;
	cout << "������� ����" << pcat->getAge() << "����� �̸�" << pcat->getName << endl;
	pcat->setAge(20);
	pcat->setName("�����");
	cout << "������� ����" << pcat->getAge() << "����� �̸�" << pcat->getName << endl;
	return 0;
}