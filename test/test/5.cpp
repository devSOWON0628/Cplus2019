#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char *name;

public:
	Cat() {
		age = 18;
		name = "야옹이";
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
	cout << "고양이의 나이" << cat->getAge() << endl;
	cout << "고양이의 이름" << cat->getName() << endl;

	cat->setAge(20);
	cat->setName("방울이");
	
	cout << "고양이의 나이" << cat->getAge()<< endl;
	cout << "고양이의 이름" << cat->getName() << endl;
	return 0;

}