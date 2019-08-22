#include <iostream>
using namespace std;

void forward();

void backward();
int main() {
	forward();
	backward();

	return 0;
}

void forward() {
	int a = 3, b = 5;
	const int *str = &a;
	cout << *str << endl;
	str = &b;
	cout << *str << endl;
}

void backward() {
	int a =3, b = 5;
	int *const str = &a;
	cout << *str << endl;
	*str = b;
	cout << *str << endl;

}