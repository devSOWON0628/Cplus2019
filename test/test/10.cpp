#include <iostream>
using namespace std;
class BoxNum {
private:
	int num1, num2;

public:
	BoxNum(int num1, int num2) :num1(num1), num2(num2) {}
	void show() {
		cout << "num1:  " << num1 << "		num2:  " << num2 << endl;
	}
	BoxNum operator+(BoxNum &rhs) {
		return BoxNum(num1 + rhs.num1, num2 + rhs.num2);
	}
};

int main() {
	BoxNum b1(10, 20);
	BoxNum b2(3, 4);
	BoxNum res = b1 + b2;
	b1.show();
	b2.show();
	res.show();

	return 0;
}