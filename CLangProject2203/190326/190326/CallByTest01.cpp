//콘솔로부터 2개의 값을 입력받아 변수 num1 num2에 저장하고 함수 명은swap_value, swap_pointer, swap_ref로 해서 num1과 num2의 값을 바꾸어서 출력하는 프로그램 작성
#include <iostream>
using namespace std;

void swap_value(int a, int b);
void swap_pointer(int *a, int *b); 
void swap_ref(int &a ,int &b);

int main() {
	int num1, num2;
	cout << "num1 : ";
	cin >> num1;
	cout<<endl;
	cout << "num2 : ";
	cin >> num2;

	swap_value(num1, num2);
	cout << num1 << ", " << num2 << endl;
	swap_pointer(&num1, &num2);
	cout << num1 << ", " << num2 << endl;//pointer에서 바꾼 데이터를 또 바꿔서 레퍼런스를 해도 그대로 나온다
	swap_ref(num1, num2);
	cout << num1 << ", " << num2 << endl;
	return 0;
}

void swap_value(int a, int b) {
	int have;
	have = a;
	a = b;
	b = have;

	cout << "call by value: " << a << ", " << b << endl;
}
void swap_pointer(int *a, int *b) {
	int have;
	have =* a;
	*a = *b;
	*b = have;
	cout << "call by pointer: " << *a << ", " <<*b << endl;
}
void swap_ref(int &a, int &b) {
	int have;
	have = a;
	a = b;
	b = have;

	cout << "call by reference: " << a<<", "<<b << endl;
}
