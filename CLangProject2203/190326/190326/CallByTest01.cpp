//�ַܼκ��� 2���� ���� �Է¹޾� ���� num1 num2�� �����ϰ� �Լ� ����swap_value, swap_pointer, swap_ref�� �ؼ� num1�� num2�� ���� �ٲپ ����ϴ� ���α׷� �ۼ�
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
	cout << num1 << ", " << num2 << endl;//pointer���� �ٲ� �����͸� �� �ٲ㼭 ���۷����� �ص� �״�� ���´�
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
