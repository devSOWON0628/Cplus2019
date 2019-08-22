#include <iostream>

using namespace std;
class Cat {
private:
	int *pAge = new int;
	const char* pName = new char;
public:
	Cat() {
		*pAge = 18;
		pName = "야옹이";
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
	cout << "고양이의 나이" << pcat->getAge() << endl;
	cout << "고양이의 이름" << pcat->getName()<< endl;
	pcat->setAge(20);
	pcat->setName("달님이");
	cout << "고양이의 나이" << pcat->getAge() << endl;
	cout << "고양이의 이름" << pcat->getName() << endl;
	return 0;
	
}