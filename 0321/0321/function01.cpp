#include <iostream>
using namespace std;

int sum(int opr1, int opr2);

void display();

int main() {
	int p = sum(2, 3);
	cout << "sum �Լ��� ȣ���ϰ� ���� ����� : " << p << endl;
	display();

	return 0;
}

int sum(int opr1, int opr2) {
	return opr2 + opr1;
}

void display() {
	cout << "display()�Լ��� ��ȯ���� ���� �Լ�" << endl;
}