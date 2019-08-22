#include <iostream>
using namespace std;
class Animal {
	int weight, height;

public:
	Animal() {
		cout << "Animal생성자()" << endl;
	}

	Animal(int weight2, int height2) :weight(weight2), height(height2) {
		//weight(weight2), height(height2) 는 매개변수 weight2, height2에
		//있는 값을 멤버변수 weight, height에 저장하는 멤버변수 초기화라고 한다
		//일반 함수에서는 멤버변수 초기화 사용 불가
		cout << "Animal생성자(int weight2, int height2)" << endl;
	}
	~Animal(){ cout << "Animal소멸자()" << endl; }
};
class Dog : public Animal {
	int price, volume;

public:
	Dog(int we1, int he1, int pr1, int vo1) :Animal(we1, he1) {
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1)" << endl;
	 }
		~Dog() { cout << "Dog소멸자()" << endl; }
	
};

int main() {
	Dog dog(30, 40, 90, 2000);
	return 0;
}