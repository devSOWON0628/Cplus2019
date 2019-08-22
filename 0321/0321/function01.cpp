#include <iostream>
using namespace std;

int sum(int opr1, int opr2);

void display();

int main() {
	int p = sum(2, 3);
	cout << "sum 함수를 호출하고 얻은 결과값 : " << p << endl;
	display();

	return 0;
}

int sum(int opr1, int opr2) {
	return opr2 + opr1;
}

void display() {
	cout << "display()함수는 반환형이 없는 함수" << endl;
}