#include <iostream>
#include <string>

using namespace std;

class Animal {
	string name;
	int wieght;

public:
	Animal() { cout << "Animal생성자()" << endl; }
	~Animal() { cout << "Animal 소멸자()" << endl; }

};

class dog : public Animal {
	int height;
public:
	dog() { cout << "dog생성자()" << endl; }
	~dog() { cout << "dog소멸자 ()" << endl; }
};

int main() {
	dog d;//생성자 호출시 상위클래스의 생성자가 먼저 실행되고
	//그 다음에 하위클래스의 생성자가 실행된다
	return 0;
	//프로그램 종료시 객체가 소멸될때 하위 객체가 먼저 소멸되고
	//상위 객체가 나중에 소멸된다
}