//������� �����Ҵ�
#include <iostream>
using namespace std;
class cat {
private:
	int *pAge=new int;///
	const char * pName=new char;///
public:
	cat() {
		*pAge = 18;
		pName = "�߿���";
	}
	~cat() {
		delete pAge;
		delete pName;//�ݵ�� ����������� ����
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char * getName() { return (char*)pName; }
	void setName(const char *name) { this->pName = name; }
};

int main() {
	cat* pcat = new cat;
	cout << "������� ����" << pcat->getAge() << "����� �̸�" << pcat->getName() << endl;
	pcat->setAge(20);
	pcat->setName("�����");
	cout << "������� ����" << pcat->getAge() << "����� �̸�" << pcat->getName() << endl;
	return 0;
}