#include <iostream>
#include <string>

using namespace std;

class Animal {
	string name;
	int wieght;

public:
	Animal() { cout << "Animal������()" << endl; }
	~Animal() { cout << "Animal �Ҹ���()" << endl; }

};

class dog : public Animal {
	int height;
public:
	dog() { cout << "dog������()" << endl; }
	~dog() { cout << "dog�Ҹ��� ()" << endl; }
};

int main() {
	dog d;//������ ȣ��� ����Ŭ������ �����ڰ� ���� ����ǰ�
	//�� ������ ����Ŭ������ �����ڰ� ����ȴ�
	return 0;
	//���α׷� ����� ��ü�� �Ҹ�ɶ� ���� ��ü�� ���� �Ҹ�ǰ�
	//���� ��ü�� ���߿� �Ҹ�ȴ�
}