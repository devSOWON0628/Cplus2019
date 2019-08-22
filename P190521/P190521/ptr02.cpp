//멤버변수 동적할당
#include <iostream>
using namespace std;
class cat {
private:
	int *pAge=new int;///
	const char * pName=new char;///
public:
	cat() {
		*pAge = 18;
		pName = "야옹이";
	}
	~cat() {
		delete pAge;
		delete pName;//반드시 멤버변수별로 삭제
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char * getName() { return (char*)pName; }
	void setName(const char *name) { this->pName = name; }
};

int main() {
	cat* pcat = new cat;
	cout << "고양이의 나이" << pcat->getAge() << "고양이 이름" << pcat->getName() << endl;
	pcat->setAge(20);
	pcat->setName("방울이");
	cout << "고양이의 나이" << pcat->getAge() << "고양이 이름" << pcat->getName() << endl;
	return 0;
}