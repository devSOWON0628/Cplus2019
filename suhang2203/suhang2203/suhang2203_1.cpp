#include <iostream>
using namespace std;

void sayHello(int num = 1) {
	for (int i = 0; i < num; i++)
		cout << "Hello ";
}

int main() {
	int a;
	cout << "Hello()->"<<endl;
	sayHello();
	cout << "��� ����ұ��?" << endl;
	cin >> a;
	cout << "Hello(" <<a<< ")->" ;
	sayHello(a);
	return 0;
}

