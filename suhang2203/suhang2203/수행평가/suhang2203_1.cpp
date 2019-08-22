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
	cout << "몇번 출력할까요?" << endl;
	cin >> a;
	cout << "Hello(" <<a<< ")->" ;
	sayHello(a);
	return 0;
}

