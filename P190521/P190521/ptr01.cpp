#include <iostream>
using namespace std;
class cat {
private: 
	int age;
	const char * name;
public :
	cat() {
		age = 18;
		name = "야옹이";
	}
	~cat() {}
		int getAge() { return age; }
		void setAge(int age) { this->age = age; }
		char * getName() { return (char*)name; }
		void setName(const char *name) { this->name = name; }
};

int main() {
	cat* pcat = new cat;
	cout << "고양이의 나이" << pcat->getAge() << "고양이 이름" << pcat->getName << endl;
	pcat->setAge(20);
	pcat->setName("방울이");
	cout << "고양이의 나이" << pcat->getAge() << "고양이 이름" << pcat->getName << endl;
	return 0;
}