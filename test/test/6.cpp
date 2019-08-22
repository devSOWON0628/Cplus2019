#include <iostream>

using namespace std;
class Cat {
private:
	int *pAge = new int;
	const char* pName = new char;
public:
	Cat() {
		*pAge = 18;
		pName = "�߿���";
	}
	~Cat() {
		delete pAge;
		delete pName;
	}

	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char *getName() { return (char*)pName; }
	void setName(const  char* Name) { pName = Name; }
};
int main() {
	Cat* pcat = new Cat;
	cout << "������� ����" << pcat->getAge() << endl;
	cout << "������� �̸�" << pcat->getName()<< endl;
	pcat->setAge(20);
	pcat->setName("�޴���");
	cout << "������� ����" << pcat->getAge() << endl;
	cout << "������� �̸�" << pcat->getName() << endl;
	return 0;
	
}